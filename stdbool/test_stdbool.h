// stdbool在C语言中的目的是添加bool类型和true和false值作为宏定义
// 在直接支持这些类型的c++中，头文件只包含一个宏，可用于检查该类型是否受支持。
#ifndef TEST_STDBOOL
#define TEST_STDBOOL
#include <cstdbool>
#include <cstdio>

void test_stdbool();

#endif
