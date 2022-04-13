#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;



void fn(int n){
  if(n <= 10){
    cout << n << " ";
    fn(n+1);
  }
}

int main() {
  void (*f)(int);
  f = fn;
  f(1);
  return 0;
}