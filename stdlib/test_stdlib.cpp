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
