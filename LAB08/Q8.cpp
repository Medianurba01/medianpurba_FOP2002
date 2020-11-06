#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{

//create a value list table use setw
 cout << "SE 2021 Mid Exam\n\n" << left <<setw(10) << "Name" <<setw(10) << "FOP" << setw(10) << "Algebra" << setw(10) <<"Calculus" <<setw(10) << "Discrete" << "\n";

 //John's score for each course
 cout << left << setw(10) << "John" << setw(10) << "90" << setw(10) << "90" << setw(10) << "70" << setw(10) << "80" << "\n";  

  //Flora's score for each course
 cout << left << setw(10) << "Flora" << setw(10) << "87" << setw(10) << "93" << setw(10) << "92" << setw(10) << "70" << "\n";
 
  //Martha's score for each course
 cout << left << setw(10) << "Martha" << setw(10) << "72" << setw(10) << "100" << setw(10) << "78" << setw(10) << "90" << "\n";
  
 
 return 0;
}