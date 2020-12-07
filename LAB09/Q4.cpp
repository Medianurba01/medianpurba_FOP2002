#include <iostream>
using namespace std;

int main()
{
   int i, j, row;
   
   for (i=0; i<=5; i++){
       for (j=0; j<=i;j++){
           cout<< "*";
    }
    cout<<endl;
    
   }
   
   for(i=5-1; i>=0;i--){
   for (j=0;j<=i;j++){
       cout<<"*";
    }
   cout <<endl;
   }
   return 0;
}