# include <iostream>
using namespace std;


//function to greet user by name
void greeting ( string nama){
     cout <<"Hello" <<nama<< " Nice to meet you";
     }

//ask user their name
int main(){
  string a;
  cout << " What is your name?";
  cin >>a;
  greeting(a);
}