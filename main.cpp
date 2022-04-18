#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
#define PI 3.1416

int main(){
  int a = 20;
  int &b = a;
  b++;
  cout << "a = " << ++a <<  " b = " << b << endl;
 
  cout << "a = " << a <<  " b = " << b << endl;
}