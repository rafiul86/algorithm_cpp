#include <iostream>
#include <vector>

using std::vector;
using std ::cout;

int main() {
    // Declare and initialize v using auto here.
    auto v = {7,8,9,10};
    for(auto j:v)
        cout << j << " ";
    cout<< "\n";
}