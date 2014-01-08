 //全局方法实现  Gobalfuc.cppp

#include "GobalFuc.h"
#include <iostream>
#include <fstream>

 void showtitle(void) { 
  using namespace std;
  cout<< "------------------------\n" 
    << "-  C++ Primer Plus    -\n" 
    << "-     by itAir        -\n"
    << "        &             -\n"     
    << "-  Hello World!       -\n";
}

 //8
void InputName(std::list<std::string>& li, const std::string & filename) {
  using namespace std;
  if (li.empty()) {
    string instr;
    cin.clear();
    cin.sync();
    ifstream fin(filename);
    if (!fin.is_open())  {
      cout << "Faile to open " << filename << "! \n";
      system("pause");
      exit(EXIT_FAILURE);
    } else {
      char ch;
      while (fin.good()) {
        while (fin.get(ch) && ch != '\n') {
          instr += ch;
        } 
        li.push_back(instr); 
        instr.clear();
      }
    } //else
  }
  return;   
}

 void ShowList(std::list<std::string>& li) {
   /*std::sort(std::list.begin(), std::list.end());*/ //费事 速度快
   li.sort(); //省事 狂慢
   for (std::string st : li)  {
     std::cout<< st << std::endl;
   }
 }

 std::list<std::string> MergeList(const std::list<std::string>& la,
   const std::list<std::string>& lb) {
     std::list<std::string> laa = la;
     std::list<std::string> lbb = lb;
     laa.merge(lbb);
     laa.unique();
     return laa;
 }

 void SaveList(std::list<std::string>& li, const std::string & filename) {
    using namespace std;
    if (li.empty()) 
       return;
    ofstream fout(filename);
    if (!fout.is_open())  {
      cout << "Faile to open " << filename << "! \n";
      system("pause");
      exit(EXIT_FAILURE);
    } else {
      for ( string str : li) {
        fout << str << endl;
      }      
    } //else
 }

 void ShowStr(const std::string  & str) {
   std::cout << str << std::endl;
 }

 void GetStrs(std::ifstream & is, std::vector<std::string> & vs) {
   std::string temp;
   size_t len;

   while (is.read((char *) &len, sizeof(size_t)) && len > 0)
   {
     char ch;
     temp = "";
     for (int j = 0; j < (int)len; j++)
     {
       if (is.read(&ch, 1))
       {
         temp += ch;
       }
       else
         break;
     }
     if (is)
       vs.push_back(temp);
   }

 }


