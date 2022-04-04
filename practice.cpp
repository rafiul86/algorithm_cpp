#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>

using std::istringstream;
using std::string;
using namespace std;

#include<iostream>
using namespace std;



int main(){
  vector<string> brothers{"John", "Paul", "George", "Ringo"};
  for(auto& brother:brothers){
    cout << brother << endl;
  }

}

