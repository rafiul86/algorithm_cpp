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
Rectangle();


T area();
T perimeter();
T getLength();
T getWidth();
void setLength(T l);
void setWidth(T w);


~Rectangle(){
  cout << "Destructor called" << endl;
  };
};

template<class T>
Rectangle<T>:: Rectangle(): length(5), width(6){};

template<class T>
void Rectangle<T>:: setLength(T l){
  length = l;
};

template<class T>
void Rectangle<T>:: setWidth(T w){
  width = w;
};

template<class T>
T Rectangle<T>:: area(){
  return length*width;
};

template<class T>
T Rectangle<T>:: getLength(){
  return length;
};

template<class T>
T Rectangle<T>:: getWidth(){
  return width;
};


template<class T>
T Rectangle<T>:: perimeter(){
  return 2*(length+width);
};

int main(){
int len;
int wid;
Rectangle<int> r;
cin >> len >> wid;
r.setLength(len);
r.setWidth(wid);
cout << r.area() << endl;
cout << r.perimeter() << endl;
return 0;
}
