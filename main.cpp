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

struct Date {
  // set variables to limit access 
  private:
    int day;
    int month;
    int year;
    
  public:
    void setDay(int d){ day = d; }
    void setMonth(int m){ month = m; }
    void setYear(int y){ year = y; }
    int getDay(){ return day; }
    int getMonth(){ return month; }
    int getYear(){ return year; }
};

int main() {
  Date date;
  date.setDay(24);
  date.setMonth(4);
  date.setYear(1986);
  int day = date.getDay();
  int month = date.getMonth();
  int year = date.getYear();
  cout << "The date is : " << day << "/" << month << "/" << year << endl;
}