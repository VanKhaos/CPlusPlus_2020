#include <iostream>

using namespace std;

int main() {

    char _userAction;
    char _acceptJ = 'J';
    char _acceptJa = 'Ja';
    bool _action = false;

    do {
        /*

        PROGRAMM BLOCK

        */

        cout << "Weiter ? (J / Ja)";
        cin >> _userAction;

        // Löscht den Eingabepuffer
        cin.sync();

        // Prüft ob die Eingabe mit 'J' oder 'Ja' Bestätigt wurde und ob der Durchlauf kleiner 30 ist
        _action = (_userAction == _acceptJ) || (_userAction == _acceptJa);

    } while (_action);
}
