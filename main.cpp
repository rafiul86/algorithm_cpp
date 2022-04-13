#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;



class Rectangle {

  int length;
  int breadth;

public:

  void setLength(int l){
    length = l;
  }
  void setBreadth(int b){
    breadth = b;
  }
  int getLength(){
    return length;
  }
  int getBreadthth(){
    return breadth;
  }
  
  int area(){
    return length * breadth;
  }

  int perimeter(){
    return 2 * (length + breadth);
  }
};

int main() {
  Rectangle r;
  Rectangle *p;
  p = &r;
 
  p->setLength(5);
  p->setBreadth(6);
  cout << "Length of rectangle is " << p->getLength() << endl;
  cout << "Breadth of rectangle is " << p->getBreadthth() << endl;
  cout << "Area of rectangle is " << p->area() << endl;
  return 0;
}