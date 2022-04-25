#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int print_array( int my_num[], int size){
  for(int i=0; i<size ;i++){
    
    cout<<my_num[i]<<" ";
  }
  cout<<endl;
  return 0;
}


int main() {
  int arr[5] = {1,2,3,4,5};
  print_array(arr, 5);
  for(int i=0; i<5 ;i++){
    arr[3] = 333;
    cout<<arr[i]<<" ";
  }
  return 0;
}