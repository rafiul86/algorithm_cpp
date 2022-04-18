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
  int day;
  int year;
  string month;
  
};

int main() {
  Date d;
  d.day = 24;
  d.month = "April";
  d.year = 1986;
  // Test the output
  assert(d.day == 24);
  assert(d.month == "April");
  assert(d.year == 1986);

  cout << "The day is " << d.day << "th " << d.month << " " << d.year << endl;
  return 0;
}