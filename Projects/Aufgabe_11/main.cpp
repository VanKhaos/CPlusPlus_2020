#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
bool Bedingung = false;
char Weiter = 'j';


int main() {

    /*
    AUFGABE:
    Es soll mit einem Programm ein eingelesenes Zeichen innerhalb einer Zeichenkette gesucht werden.    
    */

    char zeichenkette[30];
    char suchZeichen;
    int laenge;
    bool keinZeichen = 0;


    do {
        // Zeichenkette definieren
        cout << "Zeichenkette mit maximal 29 Zeichen eingeben: ";
        cin.getline(zeichenkette, 30);
        cin.sync();
        cout << endl;
        cout << "Zeichenkette: " << zeichenkette << endl;

        // Zeichenkette Länge herrausfinden
        laenge = 0;
        while (zeichenkette[laenge] != '\0') {
            laenge = laenge + 1;
        }
        cout << "Laenge von Buchstabenkette: " << laenge << endl;

        // Suchzeichen definieren
        cout << "Welches Zeichen soll gesucht werden ? ";
        cin >> suchZeichen;
        cin.sync();
        cout << endl;
        
        // Suchen nach dem Zeichen
        // Alternativ für laenge = zeichenkette[i] != '\0'
        for (int i = 0; i < laenge; i = i + 1) {
            keinZeichen = 0;
            if (zeichenkette[i] == suchZeichen) {
                cout << "Gefunden =) \n";
                cout << "Position: " << i + 1 << endl;
                keinZeichen = 1;
                cout << keinZeichen << endl;
            } else if (zeichenkette[i] != suchZeichen){
                keinZeichen = 0;
                cout << keinZeichen << endl;
            }            

        }

        // Prüfen ob das Zeichen gefunden wurde
        if (keinZeichen == 0) {
            cout << "Kein Zeichen gefunden\n";
        }
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