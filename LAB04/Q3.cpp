#include <iostream>
using namespace std;

int main () {
  
 //masukkan variabel

   float x,y,z;
   float rata;

   cout <<"Kalkulator rata-rata " <<endl;
   cout << "------------------"<<endl<<endl;

   cout <<" Masukkan 3 grade anda " <<endl;
   //input nilai pertama
   cout << "Nilai  1 :";
   cin >> x;
   //input nilai kedua
   cout << "Nilai 2 :" ;
   cin >> y;
   //input nilai ketiga
   cout << "Nilai 3 :" ;
   cin >> z;
   
   //mencari rata-rata nilai
    rata = ( x+y+z)/3;
    

   if ( rata >= 80) {
     cout << "  grade anda  A";
   }
   else if ( rata >= 75) {
     cout << "  grade anda AB";
   }
   else if ( rata >=70) {
     cout <<" grade anda B";
   }

   else if ( rata >=65){
     cout <<" grade anda  C";
   }
  else if ( rata >=60) {
    cout << "  grade anda D";
  }  
  else if ( rata >= 40) {
    cout << " grade anda E";
  }

  else {
    cout << " Input anda tidak valid";
  }

  return 0;

  
 }