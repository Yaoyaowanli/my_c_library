//
// Created by 遥远 on 2023/2/20.
//

#ifndef TEST_IOS_BASE_H
#define TEST_IOS_BASE_H

#include <ios>
#include <iostream>
//class ios_base 流的基类	标准输入输出库中整个流类的基类，描述了流的最基础部分，它对所有流对象都是通用的，与他们的字符类型无关。它没有public的构造函数，因此不能声明该类的对象。
//
//	ios_base及其派生类basic_ios都定义了流的组件，这些组件不依赖于流是输入流还是输出流:ios_base描述了独立于模板参数的成员(即字符类型和特征)，而basic_ios描述了依赖于模板参数的成员。
//
//	ios_base维护流的以下信息：
//
//	格式化：
//
//	字段format flags  成员函数：flags、setf、unsetf。 描述:设置了一组内部标识，解释某些输入输出操作

void test_ios_base1();


#endif //TEST_IOS_BASE_H
