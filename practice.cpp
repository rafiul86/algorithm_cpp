#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;



int main(){
 int A[4] = {-552, 46, -5, 6};
 int min=INT_MAX;
 for(int i=0; i<4; i++){
  if(A[i]<min){
    min=A[i];
  }
 }
 cout<<min<<endl;
}

