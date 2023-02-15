#include "test_stddef.h"

void test_ptrdiff_t(){
	//宏ptrdiff_t 表示指针的减法结果。
	char str[] = "hello";
	char* c = str+4;
	ptrdiff_t ret = c - str;
	printf("c-str = %ld\n",ret);
}

void test_max_align_t(){
	//max_align_t 是用来返回默认最大对齐的类型
}

//nullptr_t 空指针类型，是nullptr的类型 （c++）

void test_offsetof(){
	//offsetof(type,member) 计算type类型首地址到member成员处的偏移量
	struct S{
		char _a;
		int _b;	
	};
	printf("%ld\n",offsetof(S,_b));
}

//NULL 宏常量，空指针
