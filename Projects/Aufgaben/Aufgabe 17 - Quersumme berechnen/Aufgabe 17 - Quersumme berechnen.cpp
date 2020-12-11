#include <iostream>
#include <iomanip>
#include "../../lib/abfragewiederholung.h"
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

int berechneQuersumme(int zahl) {
    int summe = 0;
    while (zahl > 0) {
        int digi = zahl % 10;
        zahl = zahl / 10;
        summe += digi;
    }
    return zahl;
}

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

        berechneQuersumme(userNumber);

        cout << "Die Nummer lautet: " << userNumber << endl;



        cout << "Quersumme: " << quer << endl;




        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}