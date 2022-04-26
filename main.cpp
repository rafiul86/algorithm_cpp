#include<iostream>
#include<fstream>

void recur(int n){
    if(n > 0){
    std::cout << n << " ";
    recur(n-1);
    recur(n-1);
    }
}

int main(){
recur(5);
}
