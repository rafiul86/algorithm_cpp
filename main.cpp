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


struct Rectangle {
  int length;
  int width;
};

int area(Rectangle r){
  return r.length*r.width;
}
int main(){
 int l,w;
 cin >> l >> w;
 Rectangle r;
  r.length = l;
  r.width = w;
  cout << area(r) << endl;
}
