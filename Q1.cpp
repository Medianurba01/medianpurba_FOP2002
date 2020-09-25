#include <iostream>
using namespace std;

int main () 
{  
// state the variable 
int number ,remainder;

// input the number
cout << " enter the number :";
cin>> number;
 remainder = number % 2;

// determine wether it's odd or even
if ( remainder == 0)
 cout << number << "is an even integer" << endl;
else 
cout << number <<" is an odd integer";

return 0;

}