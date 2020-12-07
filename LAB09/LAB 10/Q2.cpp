#include <iostream>
using namespace std;

int main()
{
  //enter the variabel
    int a, b,c;

    cout << "Enter a positive integer: ";
    cin >> c;

    for (int b = 1; b <= 10; b++) {
        for (a=1; a<=c; a++) {
        cout << b * a << " ";
        }
        cout<< endl;
    }
    
    return 0;
}