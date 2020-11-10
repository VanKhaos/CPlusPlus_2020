#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;

// Konstante MaxElemente für die Liste
const int MAXELEMENT = 4;

int main() {
    bool Bedingung = false;
    char Weiter = 'j';
    
    // Nummerische Liste
    // { 1, 2 } Rest wird mit 0 belegt
    // { 1, 2, 3, 4 } Jedes Element bekommt seinen eigenen Wert
    // { 0 } Jedes Element bekommt den Wert 0
    int listNumber[MAXELEMENT] = { 0 }; 

    // Zeichen/Ketten Liste
    char Buchstaben[2] = { 'A','B' };
    char Buchstabenkette[30] = "AB";
    
    // Längen Variable
    int Laenge = 0;

    do {
        
        cout << "Bitte Liste eingeben:  ";

        // Einlesen der Liste per UserInput
        for (int i = 0; i < MAXELEMENT; i = i + 1) {
            cin >> listNumber[i];
        }

        // Ändern von Werten
        listNumber[2] = 42 * listNumber[1];
        listNumber[2] = 4 + listNumber[1];

        // Ausgabe der Nummerischen Listeneinträge
        for (int Element : listNumber) {
            cout << "ELEMENT: " << Element << "  ";
        }

        cout << endl;

        // Ausgabe der Listen
        cout << "Liste Buchstabenkette: " << Buchstabenkette << endl;
        cout << "Liste Buchstaben: " << Buchstaben << endl;

        // Einlesen von maximal 29 Zeichen ohne Leerzeichen
        // cin.width(MAXANZAHL)
        cin >> Buchstabenkette;
        cin.width(30);        
        // Ausgabe der Zeichenketten
        cout << "Liste: " << Buchstabenkette << endl;
         

        // Einlesen von maximal 29 Zeichen mit Leerzeichen
        // cin.getline(LISTE,MAXANZAHL)
        cin.getline(Buchstabenkette, 30);        
        cin.clear();
        cin.sync();

        // Auslesen der Anzahl an eingebenen Zeichen
        cout << "Zeichen Eingegeben: " << cin.gcount() << endl;
        // Ausgabe der Zeichenketten
        cout << "Liste: " << Buchstabenkette << endl;

        // Zählen der Elemente in Liste mit Schleife
        Laenge = 0;
        while (Buchstabenkette[Laenge] != '\0') {
            Laenge = Laenge + 1;
        }

        cout << "Laenge von Buchstabenkette: " << Laenge << endl;
        

        //
        // Rückwerts Ausgeben von Elemente
        cout << "Liste Rueckwarts ausgeben\n";

        for (int i = Laenge; i >= 0; i = i - 1) {
            cout << Buchstabenkette[i];
        }
        cout << endl;

        // Alternative
        for (int i = 0; i < Laenge; i = i + 1) {
            cout << Buchstabenkette[Laenge - 1 - i];
        }

        cout << endl;

        // Vertauschen von Elementen
        for (int i = 0; i < Laenge / 2; i = i + 1) {
            char temp = Buchstabenkette[i];
            Buchstabenkette[i] = Buchstabenkette[Laenge - 1 - i];
            Buchstabenkette[Laenge - 1 - i] = temp;
        }

        cout << Buchstabenkette << endl;

        // Verknüpfen von Zeichenketten
        char Text1[40] = "Hallo, ";
        char Text2[5] = "Welt";

        for (int i = 0; i <= 5; i = i + 1) {
            Text1[7+i] = Text2[i];
        }

        cout << Text1 << endl;

        // Kopieren von Zeichenketten  
        for (int i = 0; i <= 5; i = i + 1) {
            Text1[i] = Text2[i];
        }

        cout << Text1 << endl;
        

        // Multidimensionale Listen
        // Datentyp Bezeichner[][] ..... [] = { Werteliste };
        char Monatsnamen[12][12] = { "Januar", "Februar", "Maerz", "April" };

        // Ausgabe = MAERZ
        cout << Monatsnamen[2] << endl;

        // Ändert bei Maerz das große M durch ein kleines M
        Monatsnamen[2][0] = 'm';
        cout << Monatsnamen[2] << endl;

        // Gibt nur den 4ten Buchstaben aus
        cout << Monatsnamen[2][3] << endl;

        for (int i = 0; i < 12; i = i + 1) {
            for (int j = 0; j < 2; j = j + 1) {
                cout << Monatsnamen[i][j];
            }
            cout << endl;
        }



        // SCHLEIFEN ROUTINE
        cout << "Weiter ( " << Weiter << " )";        
        cin >> Weiter;
        cin.sync();

        Bedingung = (Weiter == 'j');
    } while (Bedingung);

    return Fehlercode;
}