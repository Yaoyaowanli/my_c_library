//
// Created by 遥远 on 2023/1/6.
//

#include <iostream>
//#include "my_string.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

int main (){
	char* str = getenv("LANG");
	printf("%s\n",str);
    	return 0;
}
