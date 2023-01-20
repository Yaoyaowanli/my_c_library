//
// Created by 遥远 on 2023/1/6.
//

#ifndef MY_C_LIBRARY_MY_STRING_H
#define MY_C_LIBRARY_MY_STRING_H

#endif //MY_C_LIBRARY_MY_STRING_H
#pragma once
#include <iostream>
#include <cassert>
#include <cstring>

//Copying:
void* my_memcpy(void* destination,const void* source,size_t num);
void* my_memmove(void* destination,const void* source,size_t num);
char* my_strcpy (char* destination , const char* source);
char* my_strncpy (char* destination , const char* source , size_t num);

//Concatenation:
char* my_strcat (char* destination , const char* source);
char* my_strncat (char* destination , const char* source , size_t num);

//Comparison:
int my_memcmp(const void* ptr1,const void* ptr2, size_t num);
int my_strcmp(const char* str1,const char* str2);
//int strcoll(const char* str1,const char* str2); strcoll比较c字符串str1和str2，获取locale下的LC_COLLATE按照其规则对两个字符串比较
int my_strncmp(const char* str1,const char* str2,size_t num);
//size_t strxfrm(char* destination,const char* source, size_t num)将source的num字符字符串，按照本机LC_COLLATE转换字符串到dest后返回source的长度；或者是将dest传入空指针，num传入0，返回值可以检索字符串长度。(不算\0)。

//Searching:
void* my_memchr(void* ptr,int value,size_t num);
char* my_strchr(char* str, int character);
const char* my_strchr(const char* str,int character);
size_t my_strcspn(const char* str1,const char* str2);
char* my_strpbrk(char* str1,const char* str2);
char* my_strrchr(char* str,int character);
size_t my_strspn(const char* str1,const char* str2);
const char* my_strstr(const char* str1,const char* str2);

//other：
void* my_memset(void* ptr,int value,size_t num);
size_t my_strlen(const char* str);




