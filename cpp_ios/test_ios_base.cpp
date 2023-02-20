//
// Created by 遥远 on 2023/2/20.
//

#include "test_ios_base.h"


void test_ios_base1(){
    //right 是在开头加上填充字符将填充字符输出到字段宽度，hex是以十六进制读写int，showbase写整数值之前加对应的数字基前缀。
    std::cout.flags(std::ios::right | std::ios::hex | std::ios::showbase);
    std::cout.width(10);  //获取，设置字段宽度
    std::cout << 100 << std::endl;
}