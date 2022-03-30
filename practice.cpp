#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void Prime(int n)
{
    int count=0;
    
    for(int i=1; i<=n; i++){
        
        if(n%i==0)
        {
            count++;
        }
        
    }
    
    if(count == 2)
        cout<<count<<" prime";  
    else
        cout<<count<<" not prime";
            
}

int main(){
 Prime(23);
}

