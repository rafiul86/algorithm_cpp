#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main () {
    string a("1 3 4 6");
    istringstream my_stream (a);

    int p;

    while(my_stream >> p){
        cout << "my number: " << p << "\n";
    }
    cout << "Failed" << "\n";
}