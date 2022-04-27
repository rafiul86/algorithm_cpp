#include<iostream>
#include<fstream>
#include<cmath>

int sum(int n){
   if (n == 0)
      return 1;
   else{
       return n * sum(n-1);
   }
      
}

int main(){
std::cout << pow(2,8) << std::endl;
}
