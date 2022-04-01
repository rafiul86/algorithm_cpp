#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;



int main(){
  int A[2][3]= {{11,12,13},{14,15,16}};
  int B[2][3]= {{21,30,44},{51,62,73}};
  int C[2][3];
 for(int i=0;i<2;i++){
   for(int j=0;j<3;j++){
     C[i][j] =  B[i][j] % A[i][j];
     cout << C[i][j] << " ";
   }
 }
}

