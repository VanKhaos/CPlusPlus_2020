#include <iostream>

using namespace std;

// Globe Variable
int bit0 = 1;
int bit1 = 2;
int bit2 = 4;
int bit3 = 8;
int bit4 = 16;
int bit5 = 32;
int bit6 = 64;
int bit7 = 128;

int userBit0 = 0;
int userBit1 = 1;
int userBit2 = 0;
int userBit3 = 1;
int userBit4 = 0;
int userBit5 = 1;
int userBit6 = 0;
int userBit7 = 0;

int deciBit0, deciBit1, deciBit2, deciBit3, deciBit4, deciBit5, deciBit6, deciBit7;
int userSuperBit7, userSuperBit6, userSuperBit5, userSuperBit4, userSuperBit3, userSuperBit2, userSuperBit1, userSuperBit0;
char userSuperCBit7, userSuperCBit6, userSuperCBit5, userSuperCBit4, userSuperCBit3, userSuperCBit2, userSuperCBit1, userSuperCBit0;


int sumdecimal;
int main() {
    cout << "Schreiben Sie ein Programm, das die Bit-Folge aus einem Byte (8 Bit), in eine Dezimalzahl ohne ";
    cout << "Vorzeichen umrechnet.Das Bit und der jeweilige Dezimalwert sind jeweils in eigenen Variablen zu ";
    cout << "speichern.\n";

    cout << "Aendern Sie das Programm, so dass die Bit - Folge �ber die Tastatur eingegeben werden kann\n\n";

    cout << "Testdaten Binary: " << userBit0 << userBit1 << userBit2 << userBit3;
    cout << userBit4 << userBit5 << userBit6 << userBit7 << "\n";

    cout << "Rechnung: _sumdecimal = (_deciBit0 + _deciBit1 + _deciBit2 + _deciBit3 + ";
    cout << "_deciBit4 + _deciBit5 + _deciBit6 + _deciBit7) + 1;\n";

    deciBit0 = (userBit0 * bit0);
    deciBit1 = (userBit1 * bit1);
    deciBit2 = (userBit2 * bit2);
    deciBit3 = (userBit3 * bit3);
    deciBit4 = (userBit4 * bit4);
    deciBit5 = (userBit5 * bit5);
    deciBit6 = (userBit6 * bit6);
    deciBit7 = (userBit7 * bit7);

    cout << "Rechnung: _sumdecimal = ("<< deciBit0 << " + " << deciBit1 << " + " << deciBit2 << " + " << deciBit3 << " + " << deciBit4 << " + " << deciBit5 << " + " << deciBit6 << " + " << deciBit7 << ") + 1;\n";

    sumdecimal = (deciBit0 + deciBit1 + deciBit2 + deciBit3 + deciBit4 + deciBit5 + deciBit6 + deciBit7);

    cout << "Ergebnis: " << sumdecimal << "\n\n";



    // USERINPUT

    cout << "Bitte eine Bit-Folge ein (Leerzeichen getrennt | von Bit-7 nach Bit-0): \n";


    // SPLITINPUT
    int _userInput;

    // 8-BIT bis 64-BIT EINGABE OHNE LEERZEICHEN M�GLICH - LEHRER VARIANTE
    cin >> userSuperCBit7 >> userSuperCBit6 >> userSuperCBit5 >> userSuperCBit4 >> userSuperCBit3 >> userSuperCBit2 >> userSuperCBit1 >> userSuperCBit0;

    userBit7 = userSuperCBit7 - '0';
    userBit6 = userSuperCBit6 - '0';
    userBit5 = userSuperCBit5 - '0';
    userBit4 = userSuperCBit4 - '0';
    userBit3 = userSuperCBit3 - '0';
    userBit2 = userSuperCBit2 - '0';
    userBit1 = userSuperCBit1 - '0';
    userBit0 = userSuperCBit0 - '0';

    cout << "Die eingegebene Binaere Zahl lautet: " << userBit7 << userBit6 << userBit5;
    cout << userBit4 << userBit3 << userBit2 << userBit1 << userBit0 << "\n";


    // 8-BIT EINGABE OHNE LEERZEICHEN MÖGLICH
    /*
    cin >> _userInput;

    userBit7 = _userInput % 10;
    userBit6 = _userInput / 10 % 10;
    userBit5 = _userInput / 100 % 10;
    userBit4 = _userInput / 1000 % 10;
    userBit3 = _userInput / 10000 % 10;
    userBit2 = _userInput / 100000 % 10;
    userBit1 = _userInput / 1000000 % 10;
    userBit0 = _userInput / 10000000 % 10;
    */

    cout << "Die eingegebene Binaere Zahl lautet: " << userBit7 << userBit6 << userBit5;
    cout << userBit4 << userBit3 << userBit2 << userBit1 << userBit0 << "\n";

    /* 8-BIT EINGABE NUR MIT LEERZEICHEN M�GLICH
    cin >> _userBit7 >> _userBit6 >> _userBit5 >> _userBit4 >> _userBit3 >> _userBit2 >> _userBit1 >> _userBit0;

    cout << "Die eingegebene Binaere Zahl lautet: " << _userBit7 << _userBit6 << _userBit5;
    cout << _userBit4 << _userBit3 << _userBit2 << _userBit1 << _userBit0 << "\n";
    */

    cout << "Rechnung: _sumdecimal = (_deciBit0 + _deciBit1 + _deciBit2 + _deciBit3 + ";
    cout << "_deciBit4 + _deciBit5 + _deciBit6 + _deciBit7) + 1;\n";

    deciBit0 = (userBit0 * bit0);
    deciBit1 = (userBit1 * bit1);
    deciBit2 = (userBit2 * bit2);
    deciBit3 = (userBit3 * bit3);
    deciBit4 = (userBit4 * bit4);
    deciBit5 = (userBit5 * bit5);
    deciBit6 = (userBit6 * bit6);
    deciBit7 = (userBit7 * bit7);

    cout << "Rechnung: _sumdecimal = (" << deciBit0 << " + " << deciBit1 << " + " << deciBit2 << " + " << deciBit3 << " + " << deciBit4 << " + " << deciBit5 << " + " << deciBit6 << " + " << deciBit7 << ") + 1;\n";

    sumdecimal = (deciBit0 + deciBit1 + deciBit2 + deciBit3 + deciBit4 + deciBit5 + deciBit6 + deciBit7);

    cout << "Ergebnis: " << sumdecimal << endl;
}
