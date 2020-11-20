#include <iostream>
using namespace std;


double toFarenheit ( double celcius); // to Create a function to Fahrenheit
 
double toCelcius ( double farenheit);//Convert Fahrenheit to Celsius
 

int main(){
   cout << "F = " << toFarenheit ( 180) << endl;
   cout << "C = " << toCelcius (180);
}
double toFarenheit (double celcius) {
  return ( celcius * 9/5) + 32;
}

double toCelcius ( double faranheit){
  return ( faranheit - 32) * 5/39;
} 
