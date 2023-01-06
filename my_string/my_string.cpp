//
// Created by 遥远 on 2023/1/6.
//

#include "my_string.h"

void* my_memcpy(void* destination , const void* source , size_t num){
    assert(destination != NULL && source != NULL);
    char* dest = (char*)destination;
    char* src = (char*)source;
    while (num--){
        *dest++ = *src++;
    }
    return destination;
}

void* my_memmove(void* destination , const void* source , size_t num){
    assert(destination != NULL && source != NULL);
    char* tmp_dest = (char*)destination;
    char* tmp_src = (char*)source;
    //如果dest<=src,或者dest >= src+num 从前往后拷贝
    //反之，从后向前拷贝
    if (tmp_dest <= tmp_src || tmp_dest >= tmp_src+num){
        while(num--){
            *tmp_dest++ = *tmp_src++;
        }
    }else{
        //+num-1指向最后一个字节
        tmp_dest = tmp_dest+num-1;
        tmp_src = tmp_src+num-1;
        while(num--){
            *tmp_dest-- = *tmp_src--;
        }
    }
    return destination;
}

char* my_strcpy(char* destination,const char* source){
    assert(source);
    assert(destination);
    char* tmp = destination;
//最后一次\0拷贝完成后while表达式的结果为\0，为假，就退出循环
    while ((*tmp++ = *source++)){
        ;
    }
    return destination;
}

char* my_strncpy (char* destination , const char* source , size_t num){
    //1、在num个字节前在source中找到了\0，则dest剩余部分写入\0到num字节为止
    //2、如果source长度大于num，则dest的末尾不会隐式写入\0
    assert(destination != NULL && source != NULL);
    char* ret = destination;
//复制num个字节，如果提前在source找到了\0，就退出在dest写入剩余的\0，如果没有找到\0就复制num字节
    while(num && (*destination++ = *source++)){
        num--;
    }
    if (num){
        while (num--){
            *destination++ = '\0';
        }
    }

    return ret;
}

char* my_strcat (char* destination , const char* source){

}

