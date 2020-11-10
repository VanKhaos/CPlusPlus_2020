#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;
const int MaxElemente = 4;

int main() {
    bool Bedingung = false;
    char Weiter = 'j';
    int Liste[MaxElemente] = { 0 }; // {1,2} Rest wird mit 0 belegt
                                                 // {1,2,3,4} Jedes Element bekommt seinen eigenen Wert
    char Buchstaben[3] = { 'A','B', '\0' };
    char Buchstabenkette[30] = "AB";
    int Laenge = 0;
    do {
        cin.sync();
        cout << "Bitte Liste eingeben:  ";
        for (int i = 0; i < MaxElemente; i = i + 1) {
            cin >> Liste[i];
        }

        Liste[2] = 42 * Liste[1];
        Liste[2] = 4 + Liste[1];

        for (int Element : Liste) {
            cout << Element << "  ";
        }
        cout << endl;
        cout << Buchstabenkette << endl;
        cout << Buchstaben << endl;

        cin.width(30);
        cin >> Buchstabenkette;
        cin.sync();
        cout << Buchstabenkette << endl;
        cin.getline(Buchstabenkette, 30);
        cout << cin.gcount() << endl;
        cin.sync();
        cout << Buchstabenkette << endl;
        // Länge einer Zeichenkette bestimmen
        Laenge = 0;
        while (Buchstabenkette[Laenge] != '\0') {
            Laenge = Laenge + 1;
        }
        cout << "Länge der Buchstabenkette ist  " << Laenge << endl;


        // vertauschen von Elementen

        cout << "Weiter (" << Weiter << "=Ja, sonst=Nein) ";
        cin >> Weiter;
        Bedingung = (Weiter == 'j');
    } while (Bedingung);

    return Fehlercode;
}