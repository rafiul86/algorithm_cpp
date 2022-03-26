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
    // Max3(34,26,63,29);
    int array_of_numbers[5] {34,26,63,29};
    array_of_numbers[4] = 56;
    for(int i = 0; i <= 4 ; i++){
        cout << array_of_numbers[i] << endl;
    }
   
    return 0;
    }
