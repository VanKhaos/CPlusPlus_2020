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

        

        // Prüfen ob Zahl1 = Zahl2 ist
        if (zahl1 == zahl2) {
            ggt = zahl1;
        } else {
            // GGT auf 1
            ggt = 1;

            // Größere und Kleinere Zahl bestimmen
            if (zahl1 > zahl2) {
                grossere = zahl1;
                kleinere = zahl2;
            } else if (zahl1 < zahl2) {
                grossere = zahl2;
                kleinere = zahl1;
            }

            /*DEBUG: VARIABLEN AUSGABE 
            cout << "Zahl1: " << zahl1 << endl;
            cout << "Zahl2: " << zahl2 << endl;
            cout << "Groessere: " << grossere << endl;
            cout << "Kleinere: " << kleinere << endl;
            cout << "GGT: " << ggt << endl;
            */


            for (int i = grossere / 2; i < grossere / kleinere; i = i + 1) {
                if (zahl1 / zahl2) {
                    cout << i << endl;
                    ggt = i;
                    break;
                } else {
                    continue;
                }
                

            }



        }


        // Ausgabe von GGT
        cout << "Groesster gemeinsamer Teiler: " << ggt << endl;
       

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