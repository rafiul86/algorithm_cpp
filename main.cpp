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



int main(){
  int x = 10;
  int * p = &x;
  ++x;
  cout << *p <<" "<< &x<< endl;
}