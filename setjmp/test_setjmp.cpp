#include "test_setjmp.h"

jmp_buf env;

void hello (){
	printf("hello~\n");
}

void world(){
	printf("world!\n");
	longjmp(env,1);
}

void test_setjmp(){

	if (setjmp(env)){
		//setjmp返回0
		hello();
	}else{
		world();
	}
}

void test_setjmp2(){
	jmp_buf buf;

	int val = setjmp(buf);
	printf("buf = %d\n",val);

	if(!val){
		longjmp(buf,1);
	}
}
