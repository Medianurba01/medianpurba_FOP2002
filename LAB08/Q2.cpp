#include <iostream>
#include <cmath>
using namespace std;

int main () {
  //to find the value from the formula
  double degree;
  double degree1;
  double degree2;
  double rad;
  double pi = M_PI;
  double ansD;

  rad = asin(0.58);
  cout <<rad<<endl;

  degree = rad * (180/pi);
  cout <<" sin = " <<degree<<endl;
  
  rad = acos(0.29);
  cout <<rad<<endl;

  degree1 = rad * (180/pi);
  cout <<"cos=" <<degree1 <<endl;

  rad = atan(0.72);
  cout << rad<<endl;

 degree2 = rad * (180/pi);
 cout<< " tan= " <<degree2<<endl;

 ansD = sqrt(156-12);
 cout<<" ans d =" <<ansD<<endl;

 return 0;
}