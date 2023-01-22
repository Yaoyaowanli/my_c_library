#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>

void func1(){
	std::cout << "func1()" << std::endl;
}

int main(){
	//测试atexit最多可以注册多少个函数
	int count=0;
	for(int i=1; i<=50; i++){
	 	int n = atexit(func1);
		if(n==0){
			printf("atexit failed! count:%d\n",count);
			return 0;
		}
		count++;
	}

        return 0;
}       
