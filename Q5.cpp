#include <iostream>
#include <cstdlib>
using namespace std;

int main (){

  srand (time(NULL));
  float num = rand () % 100,  answer;
  // rules and enter the number
cout << "Hello, welcome to the game\n"<< "How to play?\n" << " Input a number 1-100!\n"<< " What the number you input?" << endl;
cin >> answer;
// games
if (answer > 0 && answer <= 100){
if (num == answer){
  cout << "Excellent, great job!!!" << endl;
  } else if (num < answer) {
    cout << "number is too high, the number is = " << num << endl;
  }
} else {
  cout << " Number 1-100" << endl;
}

  return 0; 
}