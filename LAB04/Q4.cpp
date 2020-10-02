#include <iostream>
using namespace std;

int main (){
  
  float weight, height ;
  float calculateBMI;

  cout << " Calculate the BMI" << endl ;
  cout << "--------------------" << endl;
  
//input the weigt and height
  cout << " enter yours data" <<endl; 

  cout << "Input Weight (kg) :";
  cin >> weight;

  cout << "Input Height (m) :";
  cin >> height;

// the formula to find your BMI
  calculateBMI = weight/ (height*height);
  
// if-else for know the class (BMI)
  if (calculateBMI < 18.5){
    cout << "you are underwight";
  }
 else if (calculateBMI >= 18.5 && calculateBMI <= 24.9){
     cout << " great, you are normal";
  }
  else if (calculateBMI >= 25 && calculateBMI <= 29.9){
    cout << " You are Overweight";
  }
  else if (calculateBMI >= 30 ){
    cout << " Sorry but you are Obesity";
 }
  else {
    cout << "Your input is not valid";
  }
  return 0;
}