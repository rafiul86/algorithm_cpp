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

vector<string> value_of_vector(){
    vector<string> vector_of_ints {"name", "age", "address"};
    vector_of_ints.push_back("profession");
    cout << vector_of_ints[3] << endl;
}

int main() {
    // int a {12};
    // int &r = a;
    // r++;
    // int *p;
    // char *p1;
    // string *p2;
    // vector<int> *p3;
    // vector<string> *p4;
    // vector<char> *p5;
    // vector<vector<int>> *p6;
    // vector<vector<string>> *p7;
    // vector<vector<char>> *p8;
    // struct Rectangle *p9;
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
    // cout << a << endl;
    // int num_array [5] { 2, 5, 7, 3, 6};
    // num_array[3] = 22;
    // for (int i=0; i<5; i++) {
    //     cout << num_array[i] << endl;
    // }
    // int array_of_ints [3] [4] {
    //     {1, 2, 3, 4},
    //     {4, 5, 6, 7},
    //     {7, 8, 9, 8}
    // };
    
    // cin >> array_of_ints[0];
    // cin >> array_of_ints[1];
    // cin >> array_of_ints[2];
    // cin >> array_of_ints[3];
    // cin >> array_of_ints[4];
    value_of_vector();
    // cout << "1st number is: " << array_of_ints[0] [1] << endl;
    // cout << "2nd number is: " << array_of_ints[1] [2]<< endl;
    // cout << "3rd number is: " << array_of_ints[2] [3] << endl;
    
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