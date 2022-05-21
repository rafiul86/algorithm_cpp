#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <thread>
#include <vector>
using namespace std;
/* ENTRY POINT 
OF THE PROGRAM */

struct Person {
    int name;
    int age;
    char c;
} r, r2, r3;

int main(){
int a = 11;
int *p = &a;
cout << &a << endl;
cout << p << endl;
return 0;
}
