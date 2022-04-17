#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

class Base {
  public:
  Base() { cout << "Base" << endl; }
  Base(int x){cout << "Base x: "<< x<< endl;}
};

class Derived: public Base {
  public:
  Derived() { cout << "Derived" << endl; }
  Derived(int y){cout<<"Derived y: " <<y<<endl;}
  Derived(int x, int a):Base(a){cout<<"Base and Derived paramiterized: x " <<x <<" a: " <<a<<endl;}
};
int main(){
  Derived d(2, 3);

}
