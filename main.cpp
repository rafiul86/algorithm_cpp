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



int main() {
    long double a {1.76886648};
    long double *p;
    p = &a;
    cout << "value of pointer p is " << *p << endl;
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