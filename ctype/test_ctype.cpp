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

void test_iscntrl(){
	//iscntrl 检查字符c是否是控制字符，控制字符：%d %c %s %ld
	char arr[] = "~hello!\n";
	for(int i=0;i<strlen(arr);i++){
		printf("第%d个字符为：%c , 该字符是否是控制字符：%d\n",i+1,arr[i],iscntrl(arr[i]));
	}
}

void test_isdigit(){
	//isdigit 检查字符是否是十进制数字
	char str[] = "12345hello\n";
	int i = 0;
	while(str[i]){
		printf("字符串第\t%d\t个字符是否为十进制数字:%d\n",i+1,isdigit(str[i]));
		i++;
	}
}

void test_islower(){
	//islower 检测字符是否为小写字母
	char str[] = "HellO";
	int i = 0;
	printf("字符串：%s\n",str);
	while (str[i]){
		if(islower(str[i])){
			printf("第%d个字符是小写字母\n",i+1);
		}else{
			printf("第%d个字符不是小写字母\n",i+1);
				}
		i++;
	}
}

void test_isprint(){
	//isprint 检查字符是否是可打印的字符
	char str[] = "hello world~\n";
	printf("字符串:%s\n",str);
	for (int i=0;i<strlen(str);i++){
		printf("第%d个字符:\t%c\t,是否为可打印字符:%d\n",i+1,str[i],isprint(str[i]));
	}
}

void test_
