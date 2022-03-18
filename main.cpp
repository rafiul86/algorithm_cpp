/**********************************************
*programmer: rafiul

*c++ program to get user input through console

*18th march 2022
***********************************************/



#include <iostream>
#include <vector>

using namespace std;

int main() {
    int favourite_number;  // declaration of variable
    cout << "Enter your favourite number: ";
    // get user input
    cin >> favourite_number;
    if (favourite_number < 42) {
        cout << "You assumption is so close!" << endl;
    } else if (favourite_number < 82) {
        cout << "You are not wrong!" << endl;
    } else {
        cout << "You are wrong!" << endl;
    }
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