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

void test_ispunct(){
	//int ispunct(int c); 检查字符c是否是标点符号
	char str[] = "hello,world!";
	printf("str: %s\n",str);
	for(int i=0;i<strlen(str);i++){
		printf("%c是标点符号吗：%d\n",str[i],ispunct(str[i]));
	}
}

void test_isspace(){
	//int isspace（int c）检查字符c是否为空白符
	char str[] = "hello world\t!\n";
	printf("%s",str);
	int len = strlen(str);
	int n = 0;
	while(n != len){
		printf("str[n]: %c 是否是空白符：%d\n",str[n],isspace(str[n++]));
	}
}

void test_isupper(){
	// int isupper(int c) 检查字符是否是大写字母
	char str[] = "Hello\tWorld !";
	printf("str:%s\n",str);
	for (int i=0; i<strlen(str);i++){
		printf("srt[i]:%c 是否是大写字母：%d\n",str[i],isupper(str[i]));
	}
}

void test_isxdigit(){
	//int isxdigit(int c) 检测字符c是否是16进制数字
	//char str[] = {char('0xa'),'h','e','l','l','o',char('oxc'),'\n'};
	//printf("%s\n",str);
	//for(int i=0;i<strlen(str);i++){
	//	printf("str[i]:%c 是否是16进制数字:%d\n",str[i],isxdigit(str[i]));
	//}
}

//转换字母大小写函数：

void test_tolower(){
	//int tolower(int c) 将字母c转换为小写，如果无法转换则返回原字符
	char str[] = "HELLO World !";
	printf("str: %s\n",str);
	for(int i=0;i<strlen(str);i++){
		str[i] = tolower(str[i]);
	}
	printf("tolower str: %s\n",str);
}

void test_toupper(){
	// int toupper( int c ) 转换为大写
	 char str[] = "HELLO world !";
        printf("str: %s\n",str);
        for(int i=0;i<strlen(str);i++){
                str[i] = toupper(str[i]);
        }
        printf("toupper str: %s\n",str);
}
