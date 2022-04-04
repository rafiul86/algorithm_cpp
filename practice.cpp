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



int main(){
  vector<int> v {6, 2, 3};
    
    // using standard library function accumulate
    cout << std::accumulate(v.begin(), v.end(), 0) << "\n";
}

