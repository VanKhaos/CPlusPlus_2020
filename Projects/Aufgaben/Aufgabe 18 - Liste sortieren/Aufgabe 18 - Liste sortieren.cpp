#include <iostream>
#include <iomanip>
#include "../../lib/abfragewiederholung.h"
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

void sortiere(int liste[], int anzahl) {
    bool nichtSortiert = true;
    int temp;

    while (nichtSortiert) {
        nichtSortiert = false;

        for (int i = 0; i < anzahl - 1; i = i + 1) {
            if (liste[i] > liste[i + 1]) {
                temp = liste[i];
                liste[i] = liste[i + 1];
                liste[i + 1] = temp;
                nichtSortiert = true;
            }
        }
    }
    return;
}

int main() {
    bool Bedingung = false;
    char Weiter = 'j';
    int liste[6] = { 2,3,5,0,9,15 };

    do {
        sortiere(liste, 6);
        // Ausgabe ALLER Nummerischen Listeneinträge
        for (int Element : liste) {
            cout << "ELEMENT: " << Element << endl;
        }

        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}
