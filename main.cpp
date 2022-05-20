#include <iostream>
#include <fstream>
#include <cmath>
#include <thread>
#include <vector>

/* ENTRY POINT 
OF THE PROGRAM */



int main(){
std:: vector<int> my_array;  // fixed size array
for (int i= 0 ; i < 10 ; i++){
    my_array.push_back(i);
    std::cout << my_array[i] << std::endl;
}
return 0;
}
