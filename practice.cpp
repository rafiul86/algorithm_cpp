#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;



int main(){
 int A[] = {2, 4, 5, 6};
 for(int &a:A){
  cout<<++a<<endl;
 }
 cout<<A[1]<<endl;
}

