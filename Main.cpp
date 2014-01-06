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
//   char ch;
//   string str;
//   int n(0);
//   cout << "Enter some charactors end with $:\n";
//   while(cin>>ch) {
//     n++;
//     str += ch;
//     if (ch == '$') break; 
//   }
//   cin.clear();
//   cin.sync();
//   cout << n <<" letters befor '$' in" << str << endl; 
//   //输入流测试
// 
//   longline(2);//2
//   string filename;
//   fstream fout;
//   char ch1;
// 
//   cout << "Input .txt filename: ";
//   cin >> filename ;
//   filename += ".txt";
//   fout.open(filename, ios::out|ios::app);
//   if (!fout.is_open()) {
//     cout << "File open failed!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   } else {
//     cout << "Enter some charactors end with $\n";
//     while(cin.get(ch1) && ch1 != '$') {
//       fout << ch1;
//     }     
//   }
//   cout << "text saved." << filename << endl;
//   fout.close();
//   //蛋疼 文件流命名
// 
//   longline(3); //3
//   string file_to_copy;
//   string file_copy_to;
//   char ch2;
//   fstream fio1, fio2;
// 
//   cout << "Enter .txt file name you want to copy:";
//   cin >> file_to_copy;
//   file_to_copy += ".txt";
//   fio1.open(file_to_copy);
//   if (!fio1.is_open()) {
//     cout << "Can't open " << file_to_copy << "!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
//   cout << "Enter .txt file name you will save to: ";
//   cin >> file_copy_to;
//   file_copy_to += ".txt";
//   fio2.open(file_copy_to, ios::out | ios::app);
//   if (!fio2.is_open()) {
//     cout << "Can't open " << file_copy_to << "!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
//   while ( fio1.get(ch2)) {
//     fio2 << ch2;
//   }
//   fio1.close();
//   fio2.close();
//   cout << "3 Done.\n";
  // 流来 流去.....
  
  longline(4); //4
//   string source1, source2, aimfile;
//   char ch3, ch4;
//   string text1, text2, text3;
//   ifstream fin1, fin2;
//   ofstream fout1;
// 
//   cout << "Enter .txt source name 1:";
//   cin >> source1;
//   source1 += ".txt";
//   fin1.open(source1);
//   if (!fin1.is_open()) {
//     cout << "Can't open " << source1 << "!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
// 
//   cout << "Enter .txt source name 2:";
//   cin >> source2;
//   source2 += ".txt";
//   fin2.open(source2);
//   if (!fin2.is_open()) {
//     cout << "Can't open " << source2 << "!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
// 
//   cout << "Enter .txt new file name:";
//   cin >> aimfile;
//   aimfile += ".txt";
//   fout1.open(aimfile, ios::out );
//   if (!fout1.is_open()) {
//     cout << "Can't open " << aimfile << "!\n";
//     system("pause");
//     exit(EXIT_FAILURE);
//   }
//   while(true) {
//     while (fin1.get(ch3) && ch3 != '\n') {
//       text1 += ch3;
//     } 
//     while (fin2.get(ch4) && ch4 != '\n') {
//       text2 += ch4;
//     }
//     if (fin1.good() || fin2.good()) {
//       text3 = text1 + " " + text2;
//       fout1 << text3 << endl;
//       text1.clear();
//       text2.clear();
//       text3.clear();
//     } else {
//       break;
//     }
//   }
// 
//   fin1.close();
//   fin2.close();
//   fout1.close();
  cout << "4 Done.\n";
  //多文件打开与 写入

  longline(5); //5
  list<string> matlist;
  list<string> patlist;
  cout << "Enter Mat's namelist:from mat.dat---------\n";
  InputName(matlist, "mat.dat");
  ShowList (matlist);
  cout<< "Enter Pat's namelist:from pat.dat------ \n";
  InputName(patlist, "pat.dat");
  ShowList (patlist);
  list<string> namelist;
  namelist = MergeList (patlist, matlist);
  SaveList(namelist, "namelist.dat");
  cout << "The namelist :saved to namelist.dat------------\n";
  ShowList (namelist);
  //文件读写与数据结构和容器的组合


  longline();
  system("pause");
}