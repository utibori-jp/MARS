#include <stdio.h>

//運賃を返す関数
float get_fare(char company,float main_dis,
               float branch_dis,
               int city_flag,
               char specific_city,
               char specific_station);

//JR北海道のみを利用したときの運賃
float get_H_fare(float main_dis , float branch_dis);

//出発地を特定都市に変更する関数
char get_specific_city(char specific_city , char specific_station);

int main()
{
  printf("Hello MARS!\n");
  return 0;
}
