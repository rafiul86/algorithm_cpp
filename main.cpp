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

int add(int x, int y) {
  int z;
  z = x + y;
  cout << "from add function " << x << " "<< y << " " << z << endl;
  return z;
}

int main(){
  int a = 7, b = 3;
  int c = add(a, b);
  a++;
  b++;
  cout << "from main function " << a << " "<< b << " " << c << endl;
}