#include<iostream>
using namespace std;
 
int main()
{
  // memasukkan derajat dalam celcius 
  double celcius;
  cout << " enter degree in celcius = ";
  cin>> celcius;

  // memasukkan derajat fahrenheit
  double fahrenheit = ( celcius * 9/5) + 32;

  // hasil
  cout <<" celcius after chage = " << fahrenheit << " fahrenheit degree" <<endl; 

  return 0;

}