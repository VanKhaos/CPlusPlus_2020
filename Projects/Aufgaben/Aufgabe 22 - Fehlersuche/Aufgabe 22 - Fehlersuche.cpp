#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
bool abfrageWiederholung(char weiter = 'j');
// char* intToStr(int Zahl, char Text);
void div(double& erg, int Zaehler, int Nenner = 1) {
    erg = Zaehler / Nenner;
    return;
}

double div(int zaehler, int nenner = 1) {
    double erg;
    erg = zaehler / nenner;
    return erg;
}
// MAIN
int main() {
    bool Bedingung = false;
    char Weiter = 'j';

    // intToStr(10,'test');

    do {

        int a = 3;
        double e = 12.1;
        div(e, a);

        cout << a << endl;
        cout << e << endl;


        cout << e << endl;


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
/* AUFGABE B
char* intToStr(int Zahl, char Text) {
    int Laenge = -1;
    int zahl = Zahl;

    while (zahl != 0) {
        zahl = zahl / 10;
        Laenge = Laenge + 1;
    }

    while (Zahl != 0) {
        Text[Laenge] = Zahl % 10 + "0";
        Zahl = Zahl / 10;
        Laenge = Laenge - 1;
    }
    return Laenge;
}
*/



