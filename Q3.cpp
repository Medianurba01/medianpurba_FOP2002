#include <iostream>
using namespace std;

int main ()
{
 char Y;
 cout << " Input the alphabet :"; 
 cin >>Y;

 {
   if ( Y == 'a' || Y=='i'|| Y == 'u' || Y== 'e'|| Y== 'o')
   cout << " The character is a vowel" << endl;

   else if ( Y== '1' || Y== '2' || Y== '3' || Y== '4'|| Y=='5' || Y== '6'|| Y== '7' || Y== '8' || Y== '9' ||Y== '0')
   cout <<" The alphabet is required" << endl;
  
   else 
   cout <<" The character is consonant";
   }
   return 0;

}




