#include "test_ctype.h"



void test_isalnum(){
	//int isalnum(int c) 判断c是否是数字或字母
	char c = '1';
	int a = isalnum(c);
	if(a){
		printf("c is char/int\n");
	}else{
		printf("c not is char/int\n");
	}
	
	char str[] = "hello.....";
	int i = 0;
	while(isalnum(str[i])){
		i++;
	}
	printf("字符串%s 前%d个字符是数字/字母!\n",str,i);
}
