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


balance = amount;
hundred_note = amount / hundred_note_divider;
balance = balance - (hundred_note * hundred_note_divider);

fifty_note = balance / fifty_note_divider;
balance =  balance - (fifty_note * fifty_note_divider);

twenty_note = balance / twenty_note_divider;
balance =  balance - (twenty_note * twenty_note_divider);

ten_note = balance / ten_note_divider;
balance = balance - (ten_note * ten_note_divider);

five_note = balance / five_note_divider;
balance = balance - (five_note * five_note_divider);

one_note = balance;

cout << "hundred note: " << hundred_note << endl;
cout << "fifty note: " << fifty_note << endl;
cout << "twenty note: " << twenty_note << endl;
cout << "ten note: " << ten_note << endl;
cout << "five note: " << five_note << endl;
cout << "one note: " << one_note << endl;
return 0;


}