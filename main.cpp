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





void fun(int a){
  cout << ++a << endl;
}

int main(){
  int x = 25;
  fun(x);
  
  cout << "from main: " << x << endl;
}