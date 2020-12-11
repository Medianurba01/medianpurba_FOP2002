#include <iostream>
using namespace std;

//linear search
void linearsearch(int my_arr[], int key,int size, int index) {
	for(int i=0; i < size; i++){
		if(key==my_arr[i]){
			index =i;
		}
	}
	cout <<"Linear search "<<key<<" is in index "<<index<<endl;
	cout <<endl;
}

//binarysearch
int binarysearch(int my_arr[], int key,int size, int index,int low, int high) {
	while(high>=low){
		
		int mid= (high + low)/2;
		
		if(key<my_arr[mid]){
			high = mid- 1;
		}
		else if(key == my_arr[mid]){
			index=mid;
			break;
		}
		else if (key > my_arr[mid]){
			low=mid+1;
		}
	}
	
  //output
	cout <<"Binary search "<<key<<" is in index "<<index<<endl;
}
int main(){
	int size=7;
	int my_arr[size]={1, 4, 7, 2, 6, 3, 5};
	
	for(int i=0; i<size-1; i++) {
    for(int j=i+1; j<size; j++) {
      if(my_arr[i]>my_arr[j]) {
        int temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }
  }
  for(int i=0; i<size; i++) {
    cout <<my_arr[i];
  }
  
  int key;
  cout << endl;
  cout << "enter what number you choose : ";
  cin >> key;
  
  int high = size -1;
  int low = 0;
  
  int index =0;
  linearsearch(my_arr, key, size, index);
  binarysearch(my_arr, key, size, index, low, high);
  
}