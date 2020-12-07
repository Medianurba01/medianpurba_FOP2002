#include <iostream>
using namespace std;

//to Create a function to sum the digits of integer number

    int sumDigits(int num1,int n) 
	{
        int sum = 0;
        while (num1 != 0) 
		{
            sum += num1 % 10;
            num1 /= 10;
        }
        return sum;
    }
 
int main()
{
	int num1,sum,n;
	sum=0;
	cout << " Enter the number : ";
	cin>> num1;
	n=num1;

  //output
	cout<<" Result sum of the digits of the number "<<n<<" is: " << sumDigits(num1,n) <<endl;
	}