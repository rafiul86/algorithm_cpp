#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void PrintBoard(vector<vector<int>> v){
  for (auto i:v){
  	for(auto j:i){
    	cout << j << " ";
    }
    cout << "\n";
  }
}
int main() {
  bool logic = true;
  if (logic){
      vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  PrintBoard(board);
  } else {
      cout << "Your logic isn't true" << "\n";
  }
 }