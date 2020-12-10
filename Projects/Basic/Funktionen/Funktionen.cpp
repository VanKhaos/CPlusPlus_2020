#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;

// Deklaration
// call by value
int add(int a, int b);
double add(double a, double b);
// Parameter mit Default wert
bool abfrageWiederholung(char weiter = 'j');

// Definition
// Zahlen einlesen
int* leseZahl(int zahlen[], int anzahl) {
    cout << "Bitte Zahlen eingeben (" << anzahl << "): ";
    for (int i = 0; i < anzahl; i = i + 1) {
        cin >> zahlen[i];
    }
    return zahlen;
}

// Zahlen ausgeben
void schreibeListe(int liste[], int anzahl) {
    for (int i = 0; i < anzahl; i = i + 1) {
        cout << "Zahl: " << liste[i] << ' ';
    }
    cout << endl;
}

// Subtrahieren von Integer
// c => call by value
// d => call by reference
void sub(int c, int& d) {
    d = d - c;
    return;
}

// Zeichen suchen
int sucheZeichen(char text[], char zeichen = ' ') {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == zeichen) {
            break;
        }
        i = i + 1;
    }
    return i;
}

// MAIN
int main() {
    bool Bedingung = false;
    char Weiter = 'j';

    const int MAXELEMENTE = 2;
    int liste[MAXELEMENTE] = { 0 };

    char zeichenkette[50] = "Hello, from C++ World!";
    int position = -1;

    double zahl1 = 1.23, zahl2 = 2.0;

    do {

        // Aufruf der Funktionen
        leseZahl(liste, MAXELEMENTE);

        liste[0] = add(liste[1], 4);

        schreibeListe(liste, MAXELEMENTE);

        sub(liste[0], liste[1]);

        cout << add(zahl1, zahl2) << endl;


        position = sucheZeichen(zeichenkette, 'H');
        cout << "Zeichenkette: " << zeichenkette << endl;
        cout << "Zeichen befindet sich an Position: " << position << endl;

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

// Addieren von Integer
int add(int a, int b) {
    a = a + b;
    return a;
}

// Addieren von Double
double add(double a, double b) {
    a = a + b;
    return a;
}
