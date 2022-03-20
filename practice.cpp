#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::vector;

// definition of struct
// struct Rectangle{
//     int length;
//     int width;
// };

int add(int a, int b) {

    int c;
    a++;
    b++;
    c = a + b;
    return c;
}

int main(){

    int num1 = 10; 
    int num2 = 20;

    cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    // pointer to struct Rectangle
    // struct Rectangle *p;

    // p =  new Rectangle;

    // p->length = 10;
    // p->width = 20;

    // cout << p->length << endl;
    // cout << p->width << endl;

}
