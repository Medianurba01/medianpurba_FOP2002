#include<iostream>
using namespace std;

int main() {
//state the variables
int number;
while (number <=50 )
{
if (number %3 == 0 && number %5 == 0) {
  cout << "ZIPZAP" << endl;
}
else if (number %5 == 0) {
  cout << "ZAP" << endl;
}
else if (number %3 == 0) {
  cout << "ZIP" << endl;
}
else {
  cout << number << endl;
}
number++;
}
return 0;
}