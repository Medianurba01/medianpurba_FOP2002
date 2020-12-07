#include <iostream>
using namespace std;

//to create function to get how many years, month, and days passed by user’s input of total number of days


void yearCalc (int, int&, int&, int&);
int main ()
{

int num, num2, num3, num4;

cout << " Enter your number " << endl;
cin >> num;

//output
yearCalc (num, num2, num3, num4);
cout << " Get information " << num2 << " years" << endl;
cout << " Get information " << num3 << " months " << endl;
cout << " Get information " << num4<< " days" << endl;

return 0;

}

//formula 
void yearCalc(int total, int& year, int& month, int& day)
{
year = total/365;
total %= 365;
month = total/30;
total %= 30;
day = total;
}