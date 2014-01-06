/*-----------------------------------------
//   C++ Primer Plus 课后习题 p298 8.8
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

void main()
{
  showtitle();
  longline();

  longline(1); //1  
  char ch;
  string str;
  int n(0);
  cout << "Enter some charactors end with $:\n";
  while(cin>>ch) {
    n++;
    str += ch;
    if (ch == '$') break; 
  }
  cin.clear();
  cin.sync();
  cout << n <<" letters befor '$' in" << str << endl; 
  //输入流测试

  longline(2);//2
  string filename;
  fstream fout;
  char ch1;

  cout << "Input .txt filename: ";
  cin >> filename ;
  filename += ".txt";
  fout.open(filename, ios::out|ios::app);
  if (!fout.is_open()) {
    cout << "File open failed!\n";
  } else {
    cout << "Enter some charactors end with ctrl+Z:\n";
    while(cin.get(ch1) && ch1 != '$') {
      fout << ch1;
    }     
  }
  cout << "text saved." << filename << endl;
  fout.close();



  longline();
  system("pause");
}