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

string s1 = "Hello";
string s2 = {"hello"};
string s3 = {"HELLO", 3};
string s4 = {"HELLO", 0, 3};

string s6 = {s1};
cout << s1 << endl;
cout << s2 << endl;
cout << s3 << endl;
cout << s4 << endl;

cout << s6 << endl;

return 0;
}
