#include <iostream>
#include <iomanip>
#include "../../lib/abfragewiederholung.h"
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

double berechneSumme(double& mittelwert, double liste[], int anzahl) {
    double summe = 0;

    for (int i = 0; i < anzahl; i = i + 1) {
        // ALTERNATIV
        // summe += liste[i];
        summe = summe + liste[i];
    }
    mittelwert = summe / anzahl;
    return summe;
}

int main() {
    bool Bedingung = false;
    char Weiter = 'j';

    // Daten für die Funktion
    double liste[10] = { 1.1, 1.4, 2.3 };
    int anzahl = 3;
    double mittelwert, summe;

    do {

        // AUFRUF
        summe = berechneSumme(mittelwert, liste, anzahl);
        // AUSGABE
        cout << "Mittelwert: " << mittelwert << endl;
        cout << "Summe: " << summe << endl;



        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}


