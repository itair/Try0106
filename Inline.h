//Inline.h  // ȫ�ֳ��������� //��Դ����

#ifndef TRY0101_TRY0101_INLINE_H
#define TRY0101_TRY0101_INLINE_H
#include <iostream>
//��������

inline void longline(void) { 
  std::cout<< "_________________________\n\n";
}
inline void longline(const int i) { 
  std::cout<< "\n " << i << ".__________________\n\n"; 
}

#endif //TRY0101_TRY0101_INLINE_H