#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

int main() {

int amount;
int hundred_note;
int fifty_note;
int twenty_note;
int ten_note;
int five_note;
int one_note;

int balance;

cout << "Enter the amount of money you have: ";
cin >> amount;

hundred_note = amount / 100;
balance = amount % 100;

fifty_note = balance / 50;
balance = balance % 50;

twenty_note = balance / 20;
balance = balance % 20;

ten_note = balance / 10;
balance = balance % 10;

five_note = balance / 5;
balance = balance % 5;

one_note = balance / 1;

cout << "hundred note: " << hundred_note << endl;
cout << "fifty note: " << fifty_note << endl;
cout << "twenty note: " << twenty_note << endl;
cout << "ten note: " << ten_note << endl;
cout << "five note: " << five_note << endl;
cout << "one note: " << one_note << endl;
return 0;


}