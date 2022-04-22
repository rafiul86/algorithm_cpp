#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;




int main(){
  char selection=' ';
 while(selection != 'q' &&  selection != 'Q') {
    cout << "----------------------------------- Enter your selection -----------------------------------" << endl;
    
    cout << "1. Choose One" << endl;
    cout << "2. Choose Two " << endl;
    cout << "3. Choose Three" << endl;
    cout << "Q. Exit" << endl;
    cin >> selection;
    
   if (selection == '1'){
      cout << "You chosed one" << endl;
    } else if (selection == '2'){
      cout << "You chosed two" << endl;
    } else if (selection == '3'){
      cout << "You chosed three" << endl;
    } else if (selection == 'q' || selection == 'Q'){
      cout << "Exit" << endl;
    } 
}
}
