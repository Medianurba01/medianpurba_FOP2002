#include<iostream>
using namespace std;

//create a function to print string multiple times by user input
void repeat(string repetition , int n) {
	for(int i=0; i < n; i++){
		cout << repetition <<endl;
	}
} 

//string
int main(){
		string input;
	int Input;
	//result of output
	cout <<"Enter the string: ";
	cin >> input;
	cout <<"Enter number of times  : ";
	cin>> Input;
	
  repeat(input, Input);
}