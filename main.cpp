#include<iostream>
#include<fstream>
#include<cmath>

int fact(int n){
   if (n == 0)
      return 1;
   else{
       return fact(n-1)*n;
   }
      
}

int main(){
int fac = fact(6);
std::cout << fac << std::endl;
}
