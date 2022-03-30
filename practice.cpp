#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void factor(int n){
   for(int i=1; i<=n; i++){
        if(n%i==0){
        cout<<i<<" ";
    }
   }
}

int main(){
 factor(10);
}

