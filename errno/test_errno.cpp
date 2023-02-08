#include "test_errno.h"


void test_errno_fopen(){
	//假设我们使用fopen打开一个不存在的文件，看看errno会给出什么样的解释
	FILE* fp = fopen("hello.txt","r");
	if(fp == NULL){
		printf("open file failed,errno:%d\tmessage:%s\n",errno,strerror(errno));
		//strerror 属于string.h 接收errno并解释为字符串返回
	}else{
		fclose(fp);
		fp = NULL;
	}
}

void test_errno_fopen2(){
	FILE* fp = fopen("hello.txt","r");
        if(fp == NULL){
		//已知fopen已经修改了errno的值。
		//math.h 里求平方根的函数sqrt，如果我们传入一个负数该函数必定会发生错误，我们再来看看errno会被修改为什么值？
		double root = sqrt(100-200);
                printf("open file failed,errno:%d\tmessage:%s\n",errno,strerror(errno));
		//根据输出我们可以发现errno的值被sqrt函数改变了，所以在使用errno的时候应该注意不要让别的函数修改了errno避免错误
        }else{
                fclose(fp);
                fp = NULL;
        }
}

