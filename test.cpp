#include <cstring>
#include <cstdio>
#include <iostream>

int main (){

	char str[] = "hello";
	char str2[] = "ho";
	printf("%d\n",strcspn(str,str2));

	return 0;
}
