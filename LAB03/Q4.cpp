#include <iostream>
using namespace std;

int main(){
  char op;
  float num1, num2;
// enter the operation
  cout << " enter the operation + or - or * or / ";
  cin >> op;
//number that operation
  cout << "enter two number : ";
  cin >> num1 >> num2;
// the operated

switch (op)
{
  case '+' :
  cout << num1 + num2;
  break;

  case '-':
  cout << num1 - num2;
  break;

  case '*' :
  cout << num1 * num2;
  break;

  case '/' :
  cout << num1 / num2;
  break;

}

  return 0;
}