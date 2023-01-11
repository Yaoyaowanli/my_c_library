//
// Created by 遥远 on 2023/1/6.
//

#include <iostream>
#include "my_string.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>


void test_my_strncmp(){
        char str1[] = "hello";
        char str2[] = "hello world";

        printf("strncmp: %d\n",strncmp(str1,str2,7));
        printf("my_strncmp: %d\n",my_strncmp(str1,str2,7));
}

void test_strxfrm(){
	char str1[] = "hello world";
	void* dest = malloc(20);	
	//检索source长度
	printf("len:%ld\n",strxfrm(NULL,str1,0));
	size_t len = strxfrm((char*)dest,str1,5);
	printf("dest[%s] , len:%ld \n",(char*)dest,len);
}

void test_strcspn(){
	char str[] = "hello";
        char str2[] = "x";
        printf("%ld\n",my_strcspn(str,str2));
}

void test_my_strpbrk(){
	char str[] = "hello";
	char str2[] = "o";
	printf("%c\n",*strpbrk(str,str2));
	printf("%c\n",*my_strpbrk(str,str2));
}

void test_my_strrchr(){
	char str[] = "hello yaoyuan";
	printf("%s\n",strrchr(str,' '));
	printf("%s\n",my_strrchr(str,' '));
}

int main (){
	//test_my_strncmp();
	//test_strxfrm();
	//test_strcspn();
	//test_my_strpbrk();
	test_my_strrchr();

    	return 0;
}


