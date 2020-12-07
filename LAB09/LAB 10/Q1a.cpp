#include <iostream>
using namespace std;

//to find the max of 2 integer
int max( int a, int b);
int main (){
 cout << max( 3,4) << endl;
}

//if a>b return a
int max( int a, int b) {
  if ( a > b){
    return a;
  }
  else { 
    return b;
  }
}
 