#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using namespace std;

int main() {

const int hundred_note_divider {100};
const int fifty_note_divider {50};
const int twenty_note_divider {20};
const int ten_note_divider {10};
const int five_note_divider {5};


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

hundred_note = amount / hundred_note_divider;
balance = amount % 100;

fifty_note = balance / fifty_note_divider;
balance %=  50;

twenty_note = balance / twenty_note_divider;
balance %=  20;

ten_note = balance / ten_note_divider;
balance %=  10;

five_note = balance / five_note_divider;
balance %=  5;

one_note = balance;

cout << "hundred note: " << hundred_note << endl;
cout << "fifty note: " << fifty_note << endl;
cout << "twenty note: " << twenty_note << endl;
cout << "ten note: " << ten_note << endl;
cout << "five note: " << five_note << endl;
cout << "one note: " << one_note << endl;
return 0;


}