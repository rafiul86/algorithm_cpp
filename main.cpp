#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;



int main(){
  vector<int> vec{0};
  int num;
  cin >> num;
 vec.push_back(num);
  if (vec[0] > vec[1] && vec[0] > vec[2])
    {
      cout << "1st number is the largest" << endl;
    }
  else {
    if (vec[1] > vec[2]){
    cout << "2nd is the largest" << endl;
  }
  else {
    cout << "3rd is the largest" << endl;
    
  }
  return 0;
}
 
}