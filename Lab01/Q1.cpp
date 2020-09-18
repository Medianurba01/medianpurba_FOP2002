#include <iostream>
using namespace std;
int main () {
  //ini namain variabel
  int a=12,b=5;
  int penjumlahan, pengurangan, perkalian;
  double pembagian, reminder;

  //ini code untuk operasi
  penjumlahan = a+b;
  pengurangan = a-b;
  perkalian = a*b;
  pembagian = a/b;
  reminder = a%b;

  // ini mau ditampilkan di screen 
  cout <<"12+5 = " << penjumlahan << endl;
  cout <<"12-5 = " << pengurangan << endl;
  cout <<"12*5 = " << perkalian << endl;
  cout <<"12/5 = " <<pembagian<< endl;
  cout <<"12%5 = " << reminder<< endl;
  return 0;
}
