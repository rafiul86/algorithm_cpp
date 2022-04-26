#include<iostream>
#include<fstream>

int sum(int n){
   if (n == 0)
      return 1;
   else{
       return n * sum(n-1);
   }
      
}

int main(){
int natural_total = sum(6);
std::cout<<"The total of the natural numbers from 1 to 5 is "<<natural_total<<std::endl;
return 0;
}
