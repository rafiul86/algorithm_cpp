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



class Base{
  public:
    Base(){cout<< "Non-paramiterized Base constructor"<<endl;}
    Base(int x){cout<< "Paramiterized Base constructor: "<<x<< endl;}
};

class Derived : public Base{
  public:
    Derived(){cout<< "Non-paramiterized Derived constructor"<<endl;}
    Derived(int y){cout<< "Paramiterized Derived constructor: "<<y<< endl;}
    Derived(int x, int y):Base(x)
    {cout<< "Paramiterized Derived constructor and Base: "<<x<<" "<<y<< endl;}
};

int main(){
  Derived D(5,2);
}