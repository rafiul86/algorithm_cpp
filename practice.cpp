#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void Digit(int n)
{
    int digit;
    
    while(n>0){
        
      digit = n%10;
      n=n/10;
      cout<<digit<<" "; 
    }            
}

int main(){
 Digit(523);
}

