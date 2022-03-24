#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

// enum class Direction { North, South, East, West };

int main () {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = (a + b)/2;
    cout << "The sum of " << a << " and " << b << " is " << c << endl;
        return 0;
    }
