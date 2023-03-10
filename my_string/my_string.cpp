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
	assert(destination != NULL && source != NULL);
	char* ret = destination;
	while(*destination != '\0'){
		++destination;
	}
	while((*destination++ = *source++)){
		;
	}
	return ret;
}


char* my_strncat(char* destination,const char* source,size_t num){
	assert(destination != NULL && source != NULL);
	//将source中num个字符追加到dest后（包括\0），如果source小于num，则只到\0部分
	char* ret = destination;
	while (*destination != '\0'){
		++destination;
	}
	while ((*destination++ = *source++) && num){
		num--;
	}
	*destination = '\0';
	return ret;
}

int my_memcmp(const void* ptr1,const void* ptr2,size_t num){
	assert(ptr1 != NULL && ptr2 != NULL);
	//ptr1 和 ptr2 比较，相同返回0，第一处不同位置如果ptr1 < ptr2 返回<0，反之返回>0
	const unsigned char* p1 = (const unsigned char*)ptr1;
	const unsigned char* p2 = (const unsigned char*)ptr2;
	while (num--){
		if (*p1 != *p2){
			return *p1 - *p2;
		}
		p1++;
		p2++;
	}
	return 0;
}

int my_strcmp(const char* str1,const char* str2){
	assert(str1 != NULL && str2 != NULL);
	while (*str1 == *str2){
		if (!(*str1)){
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int my_strncmp(const char* str1,const char* str2,size_t num){
	assert(str1 != NULL && str2 != NULL);
	while (num--){
		
		if(*str1=='\0' || *str1 != *str2){
			return *str1 - *str2;
		}
		str1++;
		str2++;
	}
	return 0;
}

void* my_memchr(void* ptr,int value,size_t num){
	assert(ptr != NULL);
	char* ps = (char*)ptr;
	while (num--){
		if (*ps == value){
			return (void*)ps;
		}
		ps++;
	}
	return NULL;
}

char* my_strchr(char* str,int character){
	assert(str != NULL);
	while (*str && *str != character){
		++str;
	}
	if (*str == (char)character){
		return str;
	}
	return NULL;
}

const char* my_strchr(const char* str,int character){
 	assert(str != NULL);
        while (*str && *str != character){
                ++str;
        }
        if (*str == (char)character){
                return str;
        }
        return NULL;
}

size_t my_strcspn(const char* str1,const char* str2){
	assert(str1 != NULL && str2 != NULL);
	size_t count = 0;
	//遍历str1去str2中找
	while ( my_strchr(str2,*str1) == NULL){
		++str1;
		++count;
	}
	return count;
}

char* my_strpbrk(char* str1,const char* str2){
	assert(str1 != NULL && str2 != NULL);
	char* ret = NULL;
	while ( (ret = my_strchr(const_cast<char*>(str2),*str1)) == NULL && *str1){
		++str1;
	}
	return ret;
}

char* my_strrchr(char* str,int character){
	assert(str != NULL);
	char* start = str;
	while (*str != '\0'){
		++str;
	}
	//str 找到末尾
	while (str != start && *str != character){
		--str;
	}
	if (*str == character){
		return str;
	}
	return NULL;
}

size_t my_strspn(const char* str1,const char* str2){
	assert(str1 != NULL && str2 != NULL);
	const char* source_str = NULL;
	const char* obj_str = NULL;
	size_t count = 0;
	for (source_str = str1; *source_str != '\0'; ++source_str){
		for(obj_str = str2; *obj_str != '\0'; ++obj_str){
			if(*source_str == *obj_str){
				++count;
				break;
			}
		}
		if(*obj_str == '\0'){
			break;
		}
	}
	return count;
}

const char* my_strstr(const char* str , const char* substr){
	assert(str != NULL && substr != NULL);
	const char* obj = NULL;
	for (obj = str;*obj != '\0';obj++){
		const char* sub = substr;
		const char* tmp_obj = obj;
		while(*sub && *sub == *tmp_obj){
			sub++;
			tmp_obj++;
		}
		if (*sub == '\0'){
			return obj;
		}
	}
	return NULL;
}

void* my_memset(void* ptr,int value,size_t num){
	assert(ptr != NULL);
	unsigned char* p = (unsigned char*)ptr;
	while (num--){
		*p++ = value;
	}
	return ptr;
}

size_t my_strlen(const char* str){
	assert(str != NULL);
	size_t count = 0;
	while (*str++ != '\0'){
		count++;
	}
	return count;
}

