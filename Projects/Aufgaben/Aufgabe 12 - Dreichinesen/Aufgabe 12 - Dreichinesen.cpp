#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
bool Bedingung = false;
char Weiter = 'j';


int main() {

    /*
    AUFGABE:
    Schreiben Sie ein Programm, das in der Zeichenkette "Drei Chinesen mit dem Kontrabass“ jeden
    Vokal in der Kette durch einen über die Tastatur eingegebenen Vokal (aeiou) ersetzt.
    Das Programm soll auch prüfen, ob der eingegebene Buchstabe ein Vokal ist.
    Wenn es sich bei dem eingegebenen Zeichen um kein Vokal handelt soll es möglich sein, die Eingabe
    zu wiederholen.
    */

    char zeichenkette[34] = "Drei Chinesen mit dem Kontrabass";
    char vokaleList[10] = { 'a','A','e','E','i','I','o','O','u','U' };
    char userInput;

    int laenge;

    bool noVokal = 0;


    do {
        // Zeichenkette Ausgeben
        cout << "Zeichenkette: " << zeichenkette << endl;

        // Zeichenkette Länge herrausfinden
        laenge = 0;
        while (zeichenkette[laenge] != '\0') {
            laenge = laenge + 1;
        }
        cout << "Laenge von Zeichenkette: " << laenge << endl;

        // UserInput nach Vokal prüfen
        while (noVokal == false) {
            cout << "Gueltigen Vokal (a,e,i,o,u) eingeben: ";
            cin >> userInput;

            for (int i = 0; vokaleList[i] > 10; i = i + 1) {
                if (userInput == vokaleList[i]) {
                    noVokal = 1;
                    // Wenn Vokal gefunden, dann raus
                    break;
                }
                else {
                    noVokal = 0;
                }
                // DEBUG cout << vokaleList[i] << endl;
            }
            if (noVokal == 0) {
                cout << "Bitte gueltigen Vokal eingeben! \n";
            }

            // Vokale ersetzten
            if (noVokal == 1) {
                for (int i = 0; i < 34; i = i + 1) {
                    if (zeichenkette[i] == 'a' || zeichenkette[i] == 'A') {
                        zeichenkette[i] = userInput;
                    }
                    if (zeichenkette[i] == 'e' || zeichenkette[i] == 'E') {
                        zeichenkette[i] = userInput;
                    }
                    if (zeichenkette[i] == 'i' || zeichenkette[i] == 'I') {
                        zeichenkette[i] = userInput;
                    }
                    if (zeichenkette[i] == 'o' || zeichenkette[i] == 'O') {
                        zeichenkette[i] = userInput;
                    }
                    if (zeichenkette[i] == 'u' || zeichenkette[i] == 'U') {
                        zeichenkette[i] = userInput;
                    }
                }
            }
        }

        // Zeichenkette Ausgeben
        cout << "Zeichenkette: " << zeichenkette << endl;
        cin.clear();
        cout << endl;

        // SCHLEIFEN ROUTINE
        cout << "Weiter ( " << Weiter << " )";
        cin >> Weiter;
        cin.sync();

        Bedingung = (Weiter == 'j');
    } while (Bedingung);

    return Fehlercode;
}