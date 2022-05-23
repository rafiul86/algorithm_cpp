#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <thread>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
/* ENTRY POINT 
OF THE PROGRAM */

struct Person {
    int name;
    int age;
    char c;
} r, r2, r3;

int main(){

int a = 10;
int &r = a;
cout << a << " and " << r << endl;
int b = 20;
r = b;
r = 30;
cout << a << " and " << r << endl;
cout << a << " and " << b <<  " and " << r << endl;
return 0;
}
