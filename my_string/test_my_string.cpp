#include "test_my_string.h"

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

void test_my_strspn(){
        char str1[] = "destination";
        char str2[] = "dest";
        printf("strspn: %ld\n",strspn(str1,str2));
        printf("my_strspn: %ld\n",my_strspn(str1,str2));
}

void test_my_strstr(){
        char str1[] = "abcdefabcdef";
        char str2[] = "c";
        printf("strstr: %s\n",strstr(str1,str2));
        printf("my_strstr: %s\n",my_strstr(str1,str2));
}

void test_my_strtok(){
        char str[] = "aaa - bbb - ccc";
        printf("strtok: %s\n",strtok(str,"-"));
        printf("strtok: %s\n",strtok(NULL,"-"));
}

void test_my_memset(){
        void* ptr = malloc(10);
        memset(ptr,65,10);
        printf("%s\n",(const char*)ptr);
        free(ptr);
}

void test_strerror(){
        printf("%s\n",strerror(0));
        printf("%s\n",strerror(1));
        printf("%s\n",strerror(2));
        printf("%s\n",strerror(3));
        printf("%s\n",strerror(4));
        printf("%s\n",strerror(5));
        printf("%s\n",strerror(6));
        printf("%s\n",strerror(7));
        printf("%s\n",strerror(8));
        printf("%s\n",strerror(9));
}

void test_my_strlen(){
        char str[] = "hello";
        printf("%ld\n",my_strlen(str));
}
