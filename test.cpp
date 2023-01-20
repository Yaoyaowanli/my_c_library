#include <cstring>
#include <cstdio>
#include <iostream>

int main (){

        char str[] = "hello";
        char str2[] = "heo";
        //strspn  返回str1中与str相同部分的最后下标
        printf("%ld\n",strspn(str,str2));

        return 0;
}       
