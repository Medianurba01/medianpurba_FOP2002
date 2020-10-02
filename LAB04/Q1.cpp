#include<iostream>
using namespace std;

int main()
{
	//enter the variabel
  int age;

	cout<<"Enter your age: ";
	cin>>age;

  //person is child or not
  //>=0 and <=12
  if (age>0 && age<=12)
 {
    cout<<" Person is Child" <<endl;
 }

  //person is teenager or not
	//>=12 and <=18
	if (age>=12 && age<=18)
	{
		cout<<"Person is Teenager"<<endl;
	}
	
  // person is adult
  if (age >18)
	{
		cout<<"Person is Adult" <<endl;
	}

  

	return 0;
}