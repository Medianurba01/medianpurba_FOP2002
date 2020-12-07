#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//get information from the lab11_grade.txt file 
int main (){
  ifstream input;
  input.open("lab11_grade.txt");

  if(input.fail()){
    cout <<" ERROR; File could not open."<<endl;
    exit(1);
  }

  const int array_size = 40;

  //string
  string name[array_size];
  double grade[array_size];

  int i=0;
  string line;

  while(getline(input, line)) {
    int nameEndPos = line.find('-')-1;
    name[i]=line.substr(0, nameEndPos);
    int gradeStartPos = line.find('-')+1;
    int gradeEndPos = line.find('\n');
    grade[i]=stod(line.substr(gradeStartPos, gradeEndPos));
    ++i;
  }


  for(int i=0; i< array_size; i++) {
    cout << name[i] <<" = "<<grade[i] <<endl;
  }
  cout <<endl;

  //To find the lowest grade
  string minname = name[0];
  double min = grade[0];
  for(int i=0; i<array_size; i++) {
   if(grade[i]<min){
      min=grade[i];
      minname=name[i];
    }
  }

// To find the Highest grade
 string maxname = name[0];
 double max = grade[0];
 for(int i=0; i<array_size; i++) {
  if(grade[i]>max){
    max=grade[i];
    maxname=name[i];
  }
 }


//get know the Grade average
int sum = 0;
double grade_average;
for(int i=0; i<array_size; i++){
  sum+=grade[i];
}
grade_average = sum/array_size;

//get know the Student Who Pass
cout << "=====Student Who Pass====="<<endl;
for(int i=0; i<array_size; i++){
  if(grade[i]>grade_average){
    cout << name[i]<<endl;
  }
}
cout <<endl;


 //get know Student Who did not Pass
 cout << "=====Student Who did not Pass====="<<endl;
for(int i=0; i<array_size; i++){
  if(grade[i]<grade_average){
    cout << name[i]<<endl;
  }
}
cout <<endl;

 //output
 cout << "Lowest grade is " << minname <<" " <<min <<endl;
 cout << "Highest grade is " << maxname <<" " <<max <<endl;
 cout << "Grade average is : " << grade_average<<endl;

  input.close();
  return 0;

} 