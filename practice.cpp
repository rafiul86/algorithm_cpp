#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() {

int num1 = 3;
int num2 = 5;

   bool locked;
   if (num1 > num2){
      locked = true;
   }
   cout << std:: boolalpha << locked << "\n";
    return 0;


}