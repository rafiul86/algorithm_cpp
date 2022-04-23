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

Rectangle(int l, int w) {
  length = l;
  width = w;
}


int area(){
  return length*width;
}
};

int main(){
 int l,w;
 cin >> l >> w;
 Rectangle r(l, w);
  r.length = l;
  r.width = w;
  cout << r.area() << endl;
}
