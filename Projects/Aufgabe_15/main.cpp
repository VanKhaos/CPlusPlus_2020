#include <iostream>
#include <iomanip>
#include "../lib/abfragewiederholung.h"
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

void normiereSchreibweise(char Zeichenkette[]) {
    int i;
    for (i = 0; Zeichenkette[i] != '\0'; i = i + 1) {
        if (Zeichenkette[i] >= 65 && Zeichenkette[i] <= 92) {
            Zeichenkette[i] = Zeichenkette[i] + 32;
        }
    }
}

int entferneLeerzeichen(char Zeichenkette[]) {
    int k = 0;
    for (int i = 0; Zeichenkette[i] != '\0'; i = 1 + 1) {
        if (Zeichenkette[i] != ' ') {
            Zeichenkette[k] = '\0';
            k = k + 1;
        }
    }
    Zeichenkette[k] = '\0';
    return k;
}

int main() {
    bool Bedingung = false;
    char Weiter = 'j';

    const int MaxZeichen = 50;
    char Zeichenkette[MaxZeichen] = "uhu";
    int Laenge = 3;
    bool Palindrom = true;

    do {
        Palindrom = true;
        cout << "Bitte Zeichenkette eingeben " << endl;
        cin.getline(Zeichenkette, MaxZeichen);
        cin.clear();
        cin.sync();
        Laenge = cin.gcount() - 1;

        normiereSchreibweise(Zeichenkette);
        entferneLeerzeichen(Zeichenkette);
        
        for (int i = 0; i < Laenge / 2; i = i + 1) {
            if (Zeichenkette[i] == Zeichenkette[Laenge - 1 - i]) {
                continue;
            }
            Palindrom = false;
            break;
        }

        cout << "Die Zeichenkette ist " << (Palindrom ? "" : "k") << "ein Palindrom." << endl;

        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}
