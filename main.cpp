#include <iostream>
#include <fstream>
#include <cmath>
#include <thread>
#include <vector>




int main(){
std::vector<std::thread> threads;
int nThreads = 4;
for(int i = 0; i < nThreads; i++){
    threads.emplace_back(std::thread([](){
        while(true);
    }));
}

 for_each(threads.begin(), threads.end(), [](std::thread& t){
    t.join();
});
return 0;
}
