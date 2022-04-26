#include <iostream>
#include <string>
#include<cmath>
#include<vector>

int print(int x);


int main(){
  print(5);
  return 0;
}


int print(int x){
  
  if(x > 0){ 
    print(x-1);
    std::cout << x << std::endl;
  }
  return 0;
}

