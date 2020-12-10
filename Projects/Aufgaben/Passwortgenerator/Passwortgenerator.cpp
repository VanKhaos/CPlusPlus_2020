#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string generatePassword(unsigned int length) {
    srand(time(0));
    string password;

    for (int i = 0; i < length; i = i + 1) {
        char x = 32 + rand() % 127;
        password = password + x;
    }
    return password;
}

int main() {       
    cout << "Neues Passwort: " << generatePassword(10);
}