#include <iostream>
#include <vector>

using std::vector;
using std ::cout;

int main() {
    vector<vector<int>> board;
    board = {{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};
    int row = board.size();
    cout<< row << "\n";
}