//Try.h 主类声明与主模版

#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//常量

//类与结构
class Store
{
public:
  Store(std::ofstream & o) : os(o) {};
  void operator() (const std::string & str);
  std::ofstream & os;
 };


//模版


#endif //TRY1230_TRY1230_TRY_H