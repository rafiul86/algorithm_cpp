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
    int fact{1};
    if(n==0){
    fact = 1;
    }
    else
    {
        for( int i = 1; i <= n; i++){
            fact = fact * i;
        }
    }
return fact;
}

int main () {
    cout << factorial(10);
    }

