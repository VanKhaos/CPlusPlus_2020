#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

<<<<<<< Updated upstream
=======
void bestimmeGGT(int zahlEins, int zahlZwei) {
    int teiler;
    if (zahlEins <= zahlZwei) {
        teiler = zahlEins;
    } else {
        teiler = zahlZwei;
    }

    while (zahlEins % teiler != 0 || zahlZwei % teiler != 0) {
        cout << "Versuche: " << teiler << endl;
        teiler = teiler - 1;
    }


    // Ausgabe von GGT
    cout << "Groesster gemeinsamer Teiler: " << teiler << endl;
}

int zahl = 10;
int zahlen[2] = { 1,2 };

int berechne(int pzahl, int pzahlen[]) {
    int sum;
    sum = pzahl + pzahlen[];
    return sum;
}


berechne(zahl, zahlen);

>>>>>>> Stashed changes
// MAIN
int main() {
    bool Bedingung = false;
    char Weiter = 'j';
    
    // Variablen Definieren
    int zahl1, zahl2;
    int grossere, kleinere;
    int ggt = 1;

    do {

        // Eingabe Zahl1
        cout << "Bitte Zahl 1 eingeben: ";
        cin >> zahl1;
        cin.sync();

        // Eingabe Zahl2
        cout << "Bitte Zahl 2 eingeben: ";
        cin >> zahl2;
        cin.sync();

        // GGT auf 1
        ggt = 1;

        // Prüfen ob Zahl1 = Zahl2 ist
        if (zahl1 == zahl2) {
            ggt = zahl1;
        } else {
            // Größere und Kleinere Zahl bestimmen
            if (zahl1 > zahl2) {
                grossere = zahl1;
                kleinere = zahl2;
            } else if (zahl1 < zahl2) {
                grossere = zahl2;
                kleinere = zahl1;
            }

            /*DEBUG: VARIABLEN AUSGABE */
            cout << "Zahl1: " << zahl1 << endl;
            cout << "Zahl2: " << zahl2 << endl;
            cout << "Groessere: " << grossere << endl;
            cout << "Kleinere: " << kleinere << endl;
            cout << "DEBUG GGT: " << ggt << endl;
            

            ggt = kleinere;

            for (int i = grossere / 2; i >= grossere / kleinere; i = i - 1) {
                if (zahl1 % i == 0 && zahl2 % i == 0) {
                    ggt = i;
                    break;
                } 

            }
        }
        cout << "GGT: " << ggt << endl;

        Bedingung = abfrageWiederholung();
    } while (Bedingung);

    return Fehlercode;
}

// Wiederholungsfunktion
bool abfrageWiederholung(char weiter) {
    char zeichen;
    cout << "Weiter ( " << weiter << " )";
    cin >> zeichen;
    cin.sync();
    return (weiter == zeichen);
}