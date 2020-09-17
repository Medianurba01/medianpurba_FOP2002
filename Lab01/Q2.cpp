#include <iostream> 
using namespace std;
int main (){
  // nama variabel 
  int diameter = 10;
  double radius, luas, keliling;
  double pi = 3.14;
  // memasukkan rumus 
  radius = diameter/2;
  luas = pi*radius*radius;
  keliling = 2*pi*radius;
  // menampilkan hasil di screen
  cout <<"radius="<< radius << endl;
  cout <<"luas =" << luas << endl;
  cout <<"keliling=" << keliling << endl;
  return 0;
}