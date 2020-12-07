#include <iostream>
using namespace std;

//to find the max of 2 integer
int min ( int a, int b);
int main (){
 cout << min ( 3,4) << endl;
}

int min( int a, int b) {
  if ( a < b){
    return a;
  }
  else { 
    return b;
  }
}