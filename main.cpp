#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string message;
    string encrypted_message;
    string decrypted_message;
    getline(cin, message);
    for(int i=0; i<= message.length(); i++){
        char decipher_letter = message[i] -1;
        encrypted_message.push_back(decipher_letter);
    }

    for(int i=0; i<= encrypted_message.length(); i++){
        char decipher_letter = encrypted_message[i] + 1;
        decrypted_message.push_back(decipher_letter);
    }
    
    cout << encrypted_message << endl;
    
    cout << decrypted_message << endl;
}