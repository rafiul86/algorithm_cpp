#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int fun(int n){
  return n/2;
}

int fun(int n, int m){
  return n*m;
}

int fun(int n, int m, int o){
  int x = n + m + o;
  return x;
}

int main() {
  cout << "Division : " << fun(6) << endl;
  cout << "Multiplication : " <<  fun(5, 10) << endl;
  cout << "Addition : " << fun(5, 10, 15) << endl;
}