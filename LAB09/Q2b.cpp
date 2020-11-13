#include<iostream>
using namespace std;

//create a function to check the odd/even number
// To get information
string Dinn(int a) {
	if ( a % 2 == 0) {
		return "even";
	}
	else {
		return "odd";
	}
}

int main ( ) {
	int a;
  //ask user input
	cout <<"Input an integer " <<endl;    
	cin >>a;
   //output the information 
	cout << "your number is " << Dinn(a) <<endl;     
	return 0;
}