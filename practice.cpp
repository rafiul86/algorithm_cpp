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

struct Rectangle{
    int length;
    int width;
};

void print_rectangle(Rectangle r){
    cout << r.length << " " << r.width << endl;
}

int main () {
Rectangle rect = {10, 20};
print_rectangle(rect);


}
