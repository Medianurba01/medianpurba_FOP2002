#include <iostream>
using namespace std;

int main()
{
  //enter the variabel
   int a,b,rows;
    cout << "\n\n Display the pattern using number starting from 1:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(a=1;a<=rows;a++)
   {
	for(b=1;b<=a;b++)
	   cout<< "*" ;
	cout<<endl;
   }
   
   return 0;
}