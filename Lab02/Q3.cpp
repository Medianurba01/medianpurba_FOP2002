#include <iostream>
using namespace std;

int main ()
{
// memasukkan nilai
double radius;
double pi = 3.14;
cout << " value of radius =";
cin >> radius;

// menunjukkan hasil volume
cout << "volume =" << 1.33 * pi * radius * radius * radius <<endl;

// menunjukkan permukaan area
cout <<" surface area =" << 4 * pi * radius * radius <<endl;

return 0;

}