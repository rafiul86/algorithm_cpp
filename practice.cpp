#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

enum class Direction { North, South, East, West };

int main () {
    Direction my_horizon = Direction:: South;
    switch (my_horizon) {

        case Direction::North : cout << "North" << endl;
        break;
        case Direction::South: cout << "South is my favorite direction" << endl;
        break;
        case Direction::East: cout << "East" << endl;
        break;
        case Direction::West: cout << "West" << endl;
        break;
        return 0;
    }
}