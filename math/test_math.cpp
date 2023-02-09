#include "test_math.h"

void test_cos(){
	//cos 计算余弦值
	double param = 60.0;
	double ret = cos(param * PI / 180);
	printf ("The cosine of %f degrees is %f.\n", param, ret );	
}
//还有sin、tan、acos、asin等三角函数不做列举

//指数函数和对数函数
void test_exp (){
	//double exp（double x）； 求e的x次方
	printf("%f\n",exp(5));
}

