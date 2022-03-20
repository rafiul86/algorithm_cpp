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

void swap(int A[]) {

   for (int i=0; i<6; i++) {
       cout << A[i] << " ";
   }
}

int main(){

    int A[6] {2, 5, 7, 3, 6, 9};
    swap(A);
    return 0;
    // pointer to struct Rectangle
    // struct Rectangle *p;

    // p =  new Rectangle;

    // p->length = 10;
    // p->width = 20;

    // cout << p->length << endl;
    // cout << p->width << endl;

}
