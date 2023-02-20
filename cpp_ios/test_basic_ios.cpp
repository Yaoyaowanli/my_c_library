#include "test_basic_ios.h"



//basic_ios 是<ios>中的模版类，是<ios>中类ios_base的派生类，basic_ios 和 ios_base 都定义了流的组件，，这些组件不依赖于流是输入还是输出流，ios_base 表示不依赖于模版参数的成员，而basic_ios表示依赖于模版参数的成员。

//basic_ios 的签名为：template <class charT,class traits = char_traits<charT> >  class basic_ios ;
//	类模板向其继承的ios_base组件所保存的信息中添加如下信息:

//	格式化：

//	字段：fill character 成员函数：fill  描述：character将格式化字段填充到字段宽度(width)。

//	状态：

//	字段：error state 成员函数：rdstate（获得流的当前错误）setstate（设置状态，单个值可以通过调用good、eof、fail和bad函数来获得。）clear （见成员类型iostate）。

//	字段：exception mask  成员函数：exceptions 描述：抛出failure异常的状态标志，参见成员类型iostate。

//	其他：

//	字段：tied stream 成员函数：tie 描述：指向输出流的指针，在此流上的每次i/o操作之前刷新。

//	字段：stream buffer 成员函数：rdbuf 描述：指向关联的basic_streambuf对象的指针，该对象负责所有输入/输出操作。

