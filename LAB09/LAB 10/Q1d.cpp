#include <iostream>
using namespace std;
 
 //to find the max of 3 double
double min(double num1, double num2, double num3) 
{
	double minim;
	if ((num1 < num2) && (num1 < num3))
		minim = num1;
	else if ((num2 < num1) && (num2 < num3)) 
		minim = num2;
	else
		minim = num3;
		
	return minim;
}

//enter three number 
//find minimum of three number
int main ( ) 
{
	double a;
	double b;
	double c;
	cout <<"Enter 3 Number you want to find the minimum "<<endl;
	cin >> a >> b >> c;
	double A = min(a, b, c);

  //output
	cout << "The Minimun of your number between " << a <<", "<< b <<" and " << c << " is " << A << endl;
	
	return 0;
}