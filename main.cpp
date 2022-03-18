#include <iostream>
#include <vector>

using namespace std;

int main() {
    int favourite_number;
    cout << "Enter your favourite number: ";
    cin >> favourite_number;
    cout << "Your favourite number is " << favourite_number << endl;
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