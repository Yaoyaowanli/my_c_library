//
// Created by 遥远 on 2023/1/6.
//

#ifndef MY_C_LIBRARY_MY_STRING_H
#define MY_C_LIBRARY_MY_STRING_H

#endif //MY_C_LIBRARY_MY_STRING_H
#pragma once
#include <iostream>
#include <cassert>

//Copying:
void* my_memcpy(void* destination,const void* source,size_t num);
void* my_memmove(void* destination,const void* source,size_t num);
char* my_strcpy (char* destination , const char* source);
char* my_strncpy (char* destination , const char* source , size_t num);

//Concatenation:
char* my_strcat (char* destination , const char* source);
