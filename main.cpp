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

class Date {
  // set variables to limit access 
  public:
    Date(int , int , int );
    int day{1};
    int month{1};
    int year{0};
  
  public:
    void setDay(int d){ d > 0 ? day = d : day = 1; }
    void setMonth(int m){ m > 0 ? month = m : month = 1; }
    void setYear(int y){ y > 0 ? year = y : year = 0; }
    int getDay(){ return day; }
    int getMonth(){ return month; }
    int getYear(){ return year; }
};
Date::Date(int d, int m, int y):  year(y) {
  setDay(d);
  setMonth(m);
};


int main() {
  Date date(-2, -4, -6);
  cout << "The date is : " << date.day << "/" << date.month << "/" << date.year << endl;
}