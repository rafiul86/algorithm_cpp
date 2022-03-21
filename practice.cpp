#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
   int num1 {4}, num2 {2}, num3 {1}, num4 {3};
   int count {4};
   int total = num1 + num2 + num3 + num4 ;
   double average {0.0};
   
    average = static_cast<double>(total) / count;
  
   cout << average << "\n";


}