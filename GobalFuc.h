//GobalFuc.h //模版重载 与 显示声明  //全局函数

#ifndef TRY0101_TRY0101_GOBLALFUN_H
#define TRY0101_TRY0101_GOBLALFUN_H
#include <string>
#include <list>
<<<<<<< HEAD
#include <vector>
=======
>>>>>>> c2f5e03c9ee7974f6a26f8c5b90cda75b0115eb7
#include <fstream>

 void showtitle(void);

 void InputName(std::list<std::string>& ,const std::string &);

 void ShowList(std::list<std::string>&);

 std::list<std::string> MergeList(const std::list<std::string>&,
                                  const std::list<std::string>&) ;
 
 void SaveList(std::list<std::string>& ,const std::string &);

<<<<<<< HEAD
 void ShowStr(const std::string &);

 void GetStrs(std::ifstream &, std::vector<std::string> &);
=======
 void ShowStr(const std::string&);

 void Store(const std::ifstream & fin);
>>>>>>> c2f5e03c9ee7974f6a26f8c5b90cda75b0115eb7

#endif //TRY0101_TRY0101_GOBLALFUN_H