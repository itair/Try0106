//Try.h ������������ģ��

#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//����

//����ṹ
class Store
{
public:
  Store(std::ofstream & o) : os(o) {};
  void operator() (const std::string & str);
  std::ofstream & os;
 };


//ģ��


#endif //TRY1230_TRY1230_TRY_H