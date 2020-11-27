#include <iostream>
using namespace std;
//array
int myList[5] = {4, 7, 12, 5, 2};
//function

void get () {

  //if number is even
  for (int i = 0; i < 5; i++){
    if(myList[i]%2 == 0)
    cout<<"Even : " << myList[i] << endl;
  //if number is odd 
    else 
    cout <<"Odd : " << myList[i] <<endl;
  }
}
//driving the code
int main (){

get ();

return 0;

}