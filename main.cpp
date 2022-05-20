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
    string name;
    int age;
};

int main(){
struct Person person = {"John", 20};
cout << person.name << " " << person.age << endl;
return 0;
}
