#include <iostream>
#include <iomanip>
#include "../lib/abfragewiederholung.h"
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

int main() {
    bool Bedingung = false;
    char Weiter = 'j';

    // UserInput = Number
    int userNumber;
    int quer;

    do {
        quer = 0;
        cout << "Bitte eine Ganzzahl eingeben: \n";
        cin >> userNumber;
        cin.sync();
        cin.clear();

        cout << "Die Nummer lautet: " << userNumber << endl;

        while (userNumber > 0) {
            int digi = userNumber % 10;
            quer += digi;
            userNumber = userNumber / 10;
        }
        
        cout << "Quersumme: " << quer << endl;

        

       
        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}
