#include <iostream>
#include <cmath>

using namespace std;

int main () {

  //enter the variable

  double a,b,c,d;
  double upA, upB, upC, upD, downA, downB, downC, downD;
 
  //round up and round down
  cout<< "a rounded up is = " <<upA <<endl;
  cout<< "a rounded down is = " <<downA <<endl;

  b= 7.2;
  upB = ceil(b);
  downB = floor (b);

  cout<< "b rounded up is = " <<upB <<endl;
  cout<< "b rounded down is = " <<downB <<endl;

   c= 12.05;
  upB = ceil(c);
  downB = floor (c);

  cout<< "c rounded up is = " <<upC <<endl;
  cout<< "c rounded down is = " <<downC <<endl;

   d= 0.03;
  upB = ceil(d);
  downB = floor (d);

  cout<< "d rounded up is = " <<upD <<endl;
  cout<< "d rounded down is = " <<downD <<endl;

  return 0;

}









