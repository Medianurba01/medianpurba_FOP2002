#include <iostream>
using namespace std;

int main (){ 
  //name of variabel
  double length;
  double width;
  double area;
  double perimeter;

  //Input length and width Value
  cout<<"Input Length : ";
  cin>>length;

  cout<<"Input Width : ";
  cin>>width;
    
  //Rectangle Formula
  area = length*width;
  perimeter = 2*(length+width);

  //Compute the area and perimeter
  cout<<"The area of the rectangle is ";
  cout<<area<<endl;
  
  cout<<"The perimeter of the rectangle is ";
  cout<<perimeter<<endl;
  return 0;
}