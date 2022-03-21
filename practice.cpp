#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    int counter{10};
    int result{10};

    result = counter--;
    cout << "result: " << result << "\n";
    cout << "counter: " << counter << "\n";

}