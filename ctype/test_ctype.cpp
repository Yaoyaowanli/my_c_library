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

void test_isalpha(){
	//int isalpha(int c)   检查字符是否是字母
	char ch = 'M';
	int a = isalpha(ch);
	if(a){
		printf("字母\n");
	}else{
		printf("不是字母\n");
	}
}

void test_isblank(){
	// int isblank(int c) 检查c字符是否为空
	// 标准的"C"区域设置将空白字符视为制表符('\t')和空格字符(' ')。
	char ch = '\0';
	int a = isblank(ch);
	if (a){
		printf("字符ch是空白符号\n");
	}else{
		printf("字符ch不是空白符号\n");
	}
	
}
