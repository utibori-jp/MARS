#include <stdio.h>
#include "marsCalculator.hpp"

//出発地を特定都市に変更する関数
char get_specific_city(char specific_city , char specific_station);

int main()
{
  float main_dis = 0;
  float branch_dis = 5;
  int fare = MARS::Calculator::get_H_fare(main_dis , branch_dis);
  printf("運賃:%d円\n",fare);
  return 0;
}
