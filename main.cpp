#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
#define PI 3.1416
class Add {
  public:
  int fun(int &a, int &b) {
    a++;
    b++;
    return a + b;
  }
};

int main(){
  string name;
  int roll;
  string branch;
 ofstream file("./files/board.txt");
 if(file){
    cout<<"File created"<<endl;
    cin>>name>>roll>>branch;
  }
  else{
    cout<<"File not created"<<endl;
 }
 ifstream my_file("./files/board.txt");
 if(my_file){
   my_file>>name>>roll>>branch;
   my_file.close();
   cout<<name<<" "<<roll<<" "<<branch<<endl;
 }
}