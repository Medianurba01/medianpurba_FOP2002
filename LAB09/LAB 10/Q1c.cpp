#include <iostream>
using namespace std;
 
 //to find the max of 2 double
double min(double num1, double num2) 
{
	double minim;
	if (num1 < num2) 
		minim = num1;
	else 
		minim = num2;
		
	return minim;
}

int main ( ) 
{
	double x=1.23;
	double y=3.45;
	double z = min(x, y);

  //output
	cout << "The minimun between " << x <<" and " << y << " is " << z << endl;
}
	
