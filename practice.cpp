#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <numeric>
using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;

void PrintBoard(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    };
}

int main(){
  vector<vector<int>> board{
                            { 0, 1, 0, 0, 0, 0 },
                            { 0, 1, 0, 0, 0, 0 },
                            { 0, 1, 0, 0, 0, 0 },
                            { 0, 1, 0, 0, 0, 0 },
                            { 0, 0, 0, 0, 1, 0 }
  };
  PrintBoard(board);
}

