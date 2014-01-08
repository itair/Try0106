//Try.cpp  // 类与结构的实现

#include "Try.h"




void Store::operator() (const std::string & str) {
   std::size_t len = str.size();
   os.write((char *)&len, sizeof(std::size_t));
   os.write(str.data(), len);

 }