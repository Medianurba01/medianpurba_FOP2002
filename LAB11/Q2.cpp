#include <iostream>
using namespace std;

//function to declaration array
  int myList[5] { 4,  7, 12, 5, 2};
  
int a2(){
  int sum = 0;

    for (int n = 0; n < 5 ; n++){
        sum += myList[n];
    }
return sum;
}
   float average (){ 
    float average = a2()/5;
    return average;
}
  
 int main (){
 
    //output
   cout << "Sum of myList is : " << a2() << endl;
   cout << "Average of myList is : " << average() << endl;

    return 0;
}