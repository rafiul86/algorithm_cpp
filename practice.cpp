#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void Max3(int a,int b,int c)
{
    if (a > b && a > c){
        cout << "a";
        
    } else {
        if(b > c){
            cout << "b";
        }else{
            cout << "c";
        }
    }
//write nested if statements to print maximum of 3 numbers
    
}

int main () {
    Max3(4,6,3);
   
    return 0;
    }
