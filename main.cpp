#include <iostream>
#include <string>
#include<cmath>
#include<vector>

void print(const std::vector<std::string> &v);


int main(){
  std::vector<std::string> a{"Larry", "Moe", "Curley"};
  for(auto i:a){
    std::cout << i << std::endl;
  }
  print(a);
  return 0;
}


void print(const std::vector<std::string> &v){
  
  for(auto i:v){
    std::cout << i << std::endl;
  }
  
}

