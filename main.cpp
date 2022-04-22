#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;




int main(){
  int a[6][5] {};

  for (int row = 1; row <= 10; row++){
    for(int col = 1; col <= 10 ; col++){
      cout << row << " * " << col << " = " << row*col << endl;
    }
    cout<< "-------------" << endl;
  }
  cout<< endl;
}
