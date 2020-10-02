#include <iostream>
using namespace std;

int main() {

  //enter the variabel
    int month, year;

    cout << "Enter a year: ";
    cin >> year;
    cout << " Enter a month: ";
    cin >> month;

    
    switch (month) {

    //if person enter january
    case '1':
       cout << "31 days";
       break;

    // if person enter february
    case '2' :
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    
    cout <<" it 29 days";
   else { 
     cout <<" it 28 days";
   }

   //if person enter march
   case '3':
       cout << "31 days";
       break;

   //if person enter april
   case '4' :
       cout <<" 30 days";

  //if person enter may
  case '5' :      
      cout <<" 31 days";
      break;

 //if person enter june
 case '6' :
      cout << " 30 days";
      break;

 //if person enter july
 case '7' :
      cout << " 31 days";
      break;

//if person enter august
 case '8' :
     cout << " 31 days";
     break;

//if person enter september
 case '9' :
    cout << " 30 days";
    break;

//if person enter october 
 case 10 : 
    cout<< " 31 days";
    break;

 // if person enter september
 case 11 :
    cout << " 30 days";
    break;
 // if person enter december
 case 12 :
    cout << " 31 days";
    break;

}
return 0; 

}  
