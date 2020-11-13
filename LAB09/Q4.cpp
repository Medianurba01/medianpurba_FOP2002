#include <iostream>
using namespace std;

//function to calculate area of circle
float areaofcircle (float radius){
  float area;
  area = 3.14*radius*radius;
  return area;
}

int main () {
  float radius;

  //function to calculate volume of spehere
  //ask user to enter the number
  cout <<"Enter your number to become radius;";
  cin >> radius;
  cout <<"area =" << areaofcircle(radius) << endl;
 
 }
