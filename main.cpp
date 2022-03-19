/**********************************************
*programmer: rafiul

*c++ program to get user input through console

*18th march 2022
***********************************************/



#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;;

struct Rectangle{
    int length;
    int width;
};

int main() {
    int a {12};
    int &r = a;
    r++;
    int *p;
    char *p1;
    string *p2;
    vector<int> *p3;
    vector<string> *p4;
    vector<char> *p5;
    vector<vector<int>> *p6;
    vector<vector<string>> *p7;
    vector<vector<char>> *p8;
    struct Rectangle *p9;
    // p = new int[6];
    // p[0] = 10;
    // p[1] = 20;
    // p[2] = 30;
    // p[3] = 40;
    // p[4] = 50;
    // for (int i=0; i<6; i++) {
    //     cout << p[i] << endl;
    // }
    // cout << sizeof(*p) << endl;
    // cout << sizeof(*p1) << endl;
    // cout << sizeof(*p2) << endl;
    // cout << sizeof(*p3) << endl;
    // cout << sizeof(*p4) << endl;
    // cout << sizeof(*p5) << endl;
    // cout << sizeof(*p6) << endl;
    // cout << sizeof(*p7) << endl;
    // cout << sizeof(*p8) << endl;
    // cout << sizeof(*p9) << endl;
    cout << a << endl;

    return 0;
}

// void PrintBoard(vector<vector<int>> v){
//   for (auto i:v){
//   	for(auto j:i){
//     	cout << j << " ";
//     }
//     cout << "\n";
//   }
// }
// int main() {
//   bool logic = true;
//   if (logic){
//       vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
//                             {0, 1, 0, 0, 0, 0},
//                             {0, 1, 0, 0, 0, 0},
//                             {0, 1, 0, 0, 0, 0},
//                             {0, 0, 0, 0, 1, 0}};
//   PrintBoard(board);
//   } else {
//       int a = 5;
//       while (a >= 2){
//           cout << a << "\n";
//           a--;
//       }
//   }
//  }