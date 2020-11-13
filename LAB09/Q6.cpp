#include<iostream>
using namespace std;

//to create a math function 
//to find the pow
int pow(int inNum, int powNum) {
	int result = inNum;
	
	for(int i = 1; i < powNum; i++) {
		result *= inNum;
	}
	return result;
}
//to find the sqrt
double sqrt(double n) {
	double x = n;
	double y = 1;
	
	while (x > y) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}
//to find ceil
int ceil(double inNum) {
	int returnNum;
	returnNum = inNum;
	returnNum += 1;
	
	return returnNum;
}
//to find floor
int floor(double inNum) {
	int returnNum;
	returnNum = inNum;
	return returnNum;
}

int main ( ) {
	double num;
	int num2;
	cout <<"Enter the num "<<endl;
	cin >> num >> num2;
	
  //result of the output
	cout << "Pow(" <<num<<", "<<num2<<")  is " << pow(num, num2) <<endl;
	cout << "Sqrt of " << num2 << " is " << sqrt(num2) <<endl;
	cout << "ceil of " << num << " is " << ceil(num) <<endl;
	cout << "Floor of " << num << " is " << floor(num) <<endl;
 }