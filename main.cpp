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

public:
  int length;
  int breadth;

  int area(){
    return length * breadth;
  }

  int perimeter(){
    return 2 * (length + breadth);
  }
  
};

int main() {
  Rectangle r;
  r.length = 10;
  r.breadth = 20;

  int area = r.area();
  cout << "Area of rectangle is " << area << endl;
  return 0;
}