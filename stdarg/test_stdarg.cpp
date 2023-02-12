#include "test_stdarg.h"

void print_chars(int n,...){
	char* str;
	printf("print_chars: \n");
	va_list ap;
	va_start(ap,n);		//va_start(va_list,paramN); va_list是参数列表，paramN是使用函数的最后一个参数名，会从该参数之后开始提取参数。
	for(int i=0 ; i<n ; i++){
		str = va_arg(ap,char*);		//va_arg会从ap中返回类型char*的参数
		printf("no%d: %s\n",i+1,str);
	}		
	va_end(ap);	//结束使用必须调用end
}

void test_stdarg(){
	print_chars(3,"你好","hello world!","今天是2月12");
}
