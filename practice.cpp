#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;


int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main () {
    cout << factorial(10);
    }

