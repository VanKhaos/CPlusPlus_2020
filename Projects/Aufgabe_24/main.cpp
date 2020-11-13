#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');

// MAIN
int main() {
    bool Bedingung = false;
    char Weiter = 'j';
    
    // Variablen Definieren
    int zahl1, zahl2;
    int grossere, kleinere;
    int kgt = 1;

    do {

        // Eingabe Zahl1
        cout << "Bitte Zahl 1 eingeben: ";
        cin >> zahl1;
        cin.sync();

        // Eingabe Zahl2
        cout << "Bitte Zahl 2 eingeben: ";
        cin >> zahl2;
        cin.sync();

        kgt = 1;
        
        /* DEBUG: Überprüfung der Eingabe
        cout << "DEBUG | Zahl 1: " << zahl1 << endl;
        cout << "DEBUG | Zahl 2: " << zahl2 << endl;
        */

        // Prüfen ob Zahl1 größer ist als Zahl2
        if (zahl1 < zahl2) {
            grossere = zahl1;
            kleinere = zahl2;
        } else {
            grossere = zahl2;
            kleinere = zahl1;
        }

        // Gemeinsamen Teiler Errechnen
        for (int i = 2; i <= kleinere; i = i + 1 ) {
            if (grossere % i == 0 && kleinere % i == 0) {
                kgt = i;
                break;
            }
        }

        cout << "Zahl1: " << zahl1 << " Zahl2: " << zahl2 << " KGT: " << kgt << endl;


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