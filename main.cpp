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


class Animal {
  public:
    virtual void Talk () const = 0;
};

class Wolf:  public Animal  {
  public:
   void Talk () const {
      cout << "Loud" << endl;
   };
   void Walk() const {
      cout << "Walking" << endl;
   };
};

class Dog: public Animal {
  public:
    void Talk() const {
      cout << "Silence" << endl;
    }
};

int main(){
  Dog d;
  Wolf w;
  d.Talk();
  w.Talk();
}
