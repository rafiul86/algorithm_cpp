#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void Max3(int a,int b,int c, int d)
{
    if (a > b && a > c && a > d){
        cout << "a";
        
    } else {
        if(b > c && b > d){
            cout << "b";
        }else{
            if(c > d){
                cout << "c";
            }else{
                cout << "d";
            }
        }
    }
//write nested if statements to print maximum of 3 numbers
    
}

int main () {
    int number1;

    while ( number1 <= 100  ){
        if (number1 % 5 == 0 && number1 > 0){
            if (number1%2==0){
                continue;
                
            }
            cout << number1 <<" ";
            
        }
        ++number1;
    }
}
