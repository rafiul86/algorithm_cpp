#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<assert.h>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
#define PI 3.1416

class Animal {
  public:
   virtual void Talk () const = 0;
};

class Wolf:  public Animal  {
  public:
   void Talk () const override{
      cout << "Loud" << endl;
   };
};

class Dog: public Animal {
  public:
    void Talk() const override{
      cout << "Silence" << endl;
    }
};

int main(){
  Dog d;
  Wolf w;
  d.Talk();
  w.Talk();
}
