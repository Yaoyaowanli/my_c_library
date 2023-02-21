//
// Created by 遥远 on 2023/2/20.
//

#include "test_ios_base.h"


void test_ios_base1(){
    //right 是在开头加上填充字符将填充字符输出到字段宽度，hex是以十六进制读写int，showbase写整数值之前加对应的数字基前缀。
    std::cout.flags(std::ios::right | std::ios::hex | std::ios::showbase);
	//flags 就是为流设置新的格式，会返回之前的格式，格式标识符在ios_base::fmtflags中定义；如果参数为空会返回当前流的格式。
    std::cout.width(10);  //获取，设置字段宽度
    std::cout << 100 << std::endl;
}

void test_ios_base_2(){
	//setf方法1，设置特定的格式标识，其位在参数中设置，其余的保持不变，就像flags（fmt1｜flags（）），添加一个标识。
	//setf方法2，设置流的格式标志，其位在fmtfl和mask中设置，并清除位在mask中设置而不在fmtfl中设置的格式标志，就像调用flags((fmtfl&mask)|(flags()&~mask))一样。
	std::cout.setf(std::ios::hex,std::ios::basefield);
	std::cout.setf(std::ios::showbase);
	std::cout << 100 << std::endl;
	std::cout.unsetf(std::ios::showbase);
	std::cout << 100 << std::endl;
}

void test_ios_base_3(){
	//precision 方法用来设置浮点数表示的位数
	double f = 3.1415926;
	std::cout << f << std::endl;
	std::cout.unsetf(std::ios::floatfield);		//取消浮点数的原设置
	std::cout.precision(5);
	std::cout << f << std::endl;
	std::cout.precision(10);
	std::cout << f << std::endl;
	std::cout.setf(std::ios::fixed,std::ios::floatfield);
	std::cout << f << std::endl;
}

void test_ios_base_4(){
	//width 获取/设置字段宽度
	//字段宽度决定在某些输出表示中要写入的最小字符数。如果表示形式的标准宽度小于字段宽度，则在格式标志adjustfield确定的点(左、右或内部之一)处用填充字符填充表示形式。可以通过调用成员函数fill来检索或更改填充字符。
	std::cout << 100 << std::endl;
	std::cout.width(5);	//将字段宽度设置为5后打印
	std::cout << 100 << std::endl;
	std::cout.width(10);
	std::cout.fill('x');
	std::cout << 100 << std::endl;
}

void test_ios_base_5(){
	//getloc 获取当前语言环境
	std::locale loc;
	loc = std::cout.getloc();	
	std::cout << loc.name() << std::endl;
}
