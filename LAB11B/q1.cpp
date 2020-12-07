#include<iostream>
#include<fstream>
using namespace std;

//get information from the lab11_randnum.txt file
int main() {
  int min,max;
  double average;
  int myArray[100];
  int sum=0;
  ifstream file("lab11_randnum.txt");
  for(int i=0; i<100; i++){
    file >> myArray[i];
  }


  //to find the lowest number
  min=myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]<min){
      min=myArray[i];
    }
  }

 //to find the Highest number
  max= myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]>max){
      max=myArray[i];
    }
  }

  //to find the Average number
  sum=0;
  for(int i=0; i<100; i++){
    sum += myArray[i];
  }
  average=sum/100;
 
 //output
  cout << "Max is :"<<max<<endl;
  cout << "min is :"<<min<<endl;
  cout << "Average is :"<<average<<endl;

return 0;

} 