#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//From the lab11_grade.txt file
int main (){
  ifstream input;
  input.open("lab11_grade.txt");

  if(input.fail()){
    cout <<" ERROR; Sorry, file could not open."<<endl;
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

cout <<endl;
//get know the descending
cout << "=====After Being Sorted Down====="<<endl;
  for(int i=0; i<array_size-1; i++) {
    for(int j=i+1; j<array_size; j++) {
      if(grade[i]<grade[j]) {
        string sequence = name[i];
        name[i] = name[j];
        name[j] = sequence;
        int rating = grade[i];
        grade[i] = grade[j];
        grade[j] = rating;
      }
    }
  }
  for(int i=0; i< array_size; i++) {
    cout << name[i] <<" = "<<grade[i] <<endl;
  }

cout << endl;
//get know the ascending
  cout << "=====After Being Sorted Ascending====="<<endl;
  for(int i=0; i<array_size-1; i++) {
    for(int j=i+1; j<array_size; j++) {
      if(grade[i]>grade[j]) {
        string sequence = name[i];
        name[i] = name[j];
        name[j] = sequence;
        int rating = grade[i];
        grade[i] = grade[j];
        grade[j] = rating;
      }
    }
  }
  for(int i=0; i< array_size; i++) {
    cout << name[i] <<" = "<<grade[i] <<endl;
  }
  cout <<endl;


  input.close();
  return 0;

} 