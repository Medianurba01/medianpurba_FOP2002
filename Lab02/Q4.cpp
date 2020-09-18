#include<iostream>
using namespace std;
 
int main()
{
  // memasukkan derajat dalam celcius 
  double celcius;
  cout << " derajat dalam celcius = ";
  cin>> celcius;

  // memasukkan derajat fahrenheit
  double fahrenheit = ( celcius * 9/5) + 32;

  // hasil
  cout <<" celcius setelah diubah = " << fahrenheit << " derajat fahrenheit " <<endl; 

  return 0;

}