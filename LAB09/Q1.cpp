#include <iostream>
#include <cmath>
using namespace std;

//Create a function
//sum
int sumnum (int num1, int num2){
  int result;
result = num1 + num2;
return result;
} 

//substract
int nulnum(int num1, int num2){ 
  int result2;
result2= num1-num2;
return result2;  
}

//Multiply
int mulnum ( int num1, int num2) {
int result3;
result3= num1*num2;
return result3;
}

//Division 
int dinum (int num1, int num2) {
  int result4 = num1/num2;
return result4;
}

//output
int main (){

cout << sumnum(2,4)<<endl;
cout << nulnum(2,4)<<endl;
cout << mulnum (2,4)<<endl;
cout << dinum (2,4)<<endl;

return 0;
}



