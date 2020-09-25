#include <iostream>
using namespace std;
 int main () {
   // state the variable 
   int time;

   // input the time
   cout << " hello, what time is it now ? " << endl;
   cin >> time;

   // state the wether its morning, evening, night
   if (time>=0  && time <= 12) {
     cout << " GOOD MORNING!" << endl;
   }

   if (time >= 13 && time <= 17) {
     cout << " GOOD AFTERNOON!" << endl;
   }

   else if (time > 24 ) { 
     cout << " GOOD EVENING!" << endl;
   }

   return 0;






 }