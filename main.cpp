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

template<class T>
class Rectangle {
public:
  T length;
  T width;

Rectangle(T l, T w) {
  length = l;
  width = w;
}

T area();
T perimeter();

~Rectangle(){
  cout << "Destructor called" << endl;
  };
};

template<class T>
T Rectangle<T>:: area(){
  return length*width;
};

template<class T>
T Rectangle<T>:: perimeter(){
  return 2*(length+width);
};

int main(){
 int l,w;
 cin >> l >> w;
 Rectangle<int> r(l, w);
 r.length = l;
 r.width = w;
 cout << r.area() << endl;
 cout << r.perimeter() << endl;
 return 0;
}
