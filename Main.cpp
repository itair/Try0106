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
    system("pause");
    exit(EXIT_FAILURE);
  } else {
    cout << "Enter some charactors end with ctrl+Z:\n";
    while(cin.get(ch1) && ch1 != '$') {
      fout << ch1;
    }     
  }
  cout << "text saved." << filename << endl;
  fout.close();
  //蛋疼 文件流命名

  longline(3); //3
  string file_to_copy;
  string file_copy_to;
  char ch2;
  fstream fio1, fio2;

  cout << "Enter .txt file name you want to copy:";
  cin >> file_to_copy;
  file_to_copy += ".txt";
  fio1.open(file_to_copy);
  if (!fio1.is_open()) {
    cout << "Can't open " << file_to_copy << "!\n";
    system("pause");
    exit(EXIT_FAILURE);
  }
  cout << "Enter .txt file name you will save to: ";
  cin >> file_copy_to;
  file_copy_to += ".txt";
  fio2.open(file_copy_to, ios::out | ios::app);
  if (!fio2.is_open()) {
    cout << "Can't open " << file_copy_to << "!\n";
    system("pause");
    exit(EXIT_FAILURE);
  }
  while ( fio1.get(ch2)) {
    fio2 << ch2;
  }
  fio1.close();
  fio2.close();
  cout << "3 Done.\n";
  //


  longline();
  system("pause");
}