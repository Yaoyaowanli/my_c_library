#include <cerrno>
#include <cstdio>
#include <cstring>
#include <cmath>

//errno.h 定义了一个全局的宏errno，他被展开为一个int的左值，他提供了一种错误报告机制，比如一个函数调用发生了错误，他可能就会去修改errno的值，这样外部就可以根据errno的值去判断这个函数执行到底出了什么类型的错误。

void test_errno_fopen();
void test_errno_fopen2();
