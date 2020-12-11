#include <iostream>
using namespace std;

int main (){
  //to declare array
  const int arr_size = 7;
  int arr[arr_size] = {1,4,7,2,6,3,5};
//code for ascending and descening
  for (int i = 0; i < 7 - 1; i++){
    int temp = 0;
    for (int j = i +1; j < 7 ; j++){
      if (arr[i] < arr [j]){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for (int i = 0; i < 7; i++){
  cout << arr[i] << endl;
}

//output
cout << "============================="<<endl;
 for (int i = 0; i < 7 - 1; i++){
    int temp = 0;
    for (int j = i +1; j < 7 ; j++){
      if (arr[i] > arr [j]){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
for (int i = 0; i < 7; i++){
  cout << arr[i] << endl;

}
return 0;
}