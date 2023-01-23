#include "test_stdlib.h"


void test_atof(){
	//atof 将字符串转换为double。
	char pi[] = "3.1415926535";
	printf("atof: %f\n",atof(pi));
}

void test_atoi(){
	//atoi 将字符串转换为int
	char pi[] = "3.1415926535";
	printf("atoi: %d\n",atoi(pi));
}

void test_atol(){
	//atol 将字符串转换为long int
	char n[] = "123456789";
	printf("atol: %ld\n",atol(n));
}

void test_strtod(){
	//strtod 将字符串转换为double返回，并将参数endptr
	char p[] = "3.14159267abcde";
        char* pp = NULL;
        double num = strtod(p,&pp);
        printf("%f\n",num);
        printf("%s\n",pp);
}

void test_rand(){
	//rand用来生成一个0～RAND_MAX之间的伪随机数。RAND_MAX是0x7fff或是0x7fffffff
	int num = 10;
	while(num--){
		printf("rand: %d\n",rand());
	}
	//多次运行程序输出的结果是一样的。
	//我们可以通过取模来控制伪随机数的范围
	num = 10;
	while (num--){
		printf("rand(10): %d\n",rand()%10);
	}
}

void test_calloc(){
	//calloc 用作动态分配内存，并初始化为0
	int* pa = (int*)calloc(10,sizeof(int));
	int* pb = pa;
	for(int i = 1; i< 10 ;i++){
		*pb = i;
		pb++;
	}
	int n = 10;
	pb = pa;
	while (n--){
		printf("%d\n",*pb);
		pb++;
	}
	free(pa);
	pb = NULL;
}

void test_malloc(){
	int* pa = (int*)malloc(sizeof(int)*10);
	for(int i=0;i<10;i++){
		pa[i] = i;
	}
	int n = 10;
	while (n--){
		printf("%d\n",*pa);
		pa++;
	}
	free(pa-10);
}

void test_abort(){
	//abort 用来终止进程
	time_t timer;
	srand(timer);
	int n = rand()%10;
	
	while (n != 0){
		printf("rand(): %d\n",n);
		if (n == 0){
			abort();
		}
		n = rand()%10;
	}
}

void func1(){
	printf("func1()\n");
}

void func2(){
	printf("func2()\n");
}

void func4(){
        printf("func4()\n");
}

void func3(){
	func4();
	printf("func3()\n");
}

void test_atexit(){
	//atexit() 用来注册程序正常终止时的函数，当程序正常终止时被atexit注册的函数会按照注册顺序相反的顺序依次执行。
	//atexit（）只接收注册void func（void）的函数
	printf("hello world!\n");
	atexit(func1);
	atexit(func2);
	atexit(func3);
}

void test_quick_exit(){
	//quick_exit 是快速终止进程的函数，不执行额外的清理任务，不调用对象的析构函数。
	//at_quick_exit 可以注册函数，quick_exit终止进程是会自动调用注册的函数，和atexit类似，区别就在于atexit处理正常终止进程exit或return 0
	//at_quick_exit服务于quick_exit，他们注册的函数在不同的堆栈。
	at_quick_exit(func4);
	at_quick_exit(func2);
	at_quick_exit(func1);

	quick_exit(EXIT_SUCCESS);
}
	
void test_getenv(){
	char* pwd = getenv("PWD");
	printf("%s\n",pwd);
}

void test_system(){
	//system函数用来执行系统命令
	char command[] = "echo \"hello\"";
	system(command);
}

void* my_bsearch(const void* key,const void* base,size_t num,size_t size,int (*compar)(const void*,const void*)){
	//二分查找
	// void* bsearch (const void* key,const void* base,size_t num,size_t size,int (*compar)(const void*,const void*));
	assert(key != NULL && base != NULL && num > 0 && size > 0 && compar != NULL);	
	int left = 0;
	int right = num-1;
	while(left <= right){
		int mid = left + (right - left)/2;
		char* pmid = (char*)base + mid * size;
		if (compar(pmid,key) > 0){
			right = mid;
		}else if (compar(pmid,key) < 0){
			left = mid;
		}else{
			return (void*)pmid;
		}
	}
	return NULL;
}

int compar_int(const void* pmid,const void* key){
	//compar_int int类型数据的比较规则
	assert(pmid != NULL && key != NULL);
	const int* pm = (const int*)pmid;
	const int* pk = (const int*)key;
	if(*pm > *pk){
		return 1;
	}else if(*pm < *pk){
		return -1;
	}
	return 0;
}

void test_my_bsearch(){
	int arr[] = {1,2,3,4,5,6,7,9,22,44,65,88,101};
	int key = 88;
	int* obj = (int*)my_bsearch(&key,arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),compar_int);
	printf("find:%d\n",*obj);
}

void swap(void* p1,void* p2, size_t size){
	assert(p1 != NULL && p2 != NULL && size > 0);
	char* ch1 = (char*)p1;
	char* ch2 = (char*)p2;
	while(size--){
		char tmp = *ch1;
		*ch1 = *ch2;
		*ch2 = tmp;
		ch1++;
		ch2++;
	}
}

int partSort(void* base,size_t left,size_t right,size_t size, int (*compar)(const void* , const void*)){
	//base 是待排数组指针，left，right是单次排序的左右下标，size是元素大小
	//因为要使用char*按照字节比较所以需要size
	//首先要取到key的值，也就是基准值，但是我们不知道排序元素的类型是什么，所以取其char*指针，比较和交换在compar和swap函数进行
	char* key = ((char*)base) + (size * right);
	while (left < right) {
		//基准值放在右边，就让左边先走
		//左边找比key大的值，右边找比key小的值
		while(left < right && compar((char*)base + left,key) <= 0){
			left += size;
		}
		while(left < right && compar((char*)base + right,key) >= 0){
			right -= size;
		}
		swap((char*)base + left,(char*)base + right,size);
	}
	swap((char*)base + left,key,size);
	return left;
}

void quick_sort(void* base,size_t left,size_t right,size_t size, int (*compar)(const void* , const void*)){
	assert(base);
	if (left >= right){
		return;
	}
	int div = partSort(base,left,right,size,compar);
	quick_sort(base,left,div-size,size,compar);
	quick_sort(base,div+size,right,size,compar);
}

void my_qsort(void* base,size_t num,size_t size, int (*compar)(const void* , const void*)){
	//快速排序算法
	assert(base != NULL && num>0 && size>0 && compar != NULL);
	int left = 0;
	int right = (num*size)-size;	
	quick_sort(base,left,right,size,compar);
}

void test_my_qsort(){
	int arr[] = {23,15,26,21,74,33,7889,75,38,978,90,75,10,6,2,70};
	my_qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),compar_int);
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

}
