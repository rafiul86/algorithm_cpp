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



void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;
}

int main()
{
  int a = 4, b = 6;
  swap(a, b);
  cout << "a = " << a << " b = " << b << endl;
  return 0;
}