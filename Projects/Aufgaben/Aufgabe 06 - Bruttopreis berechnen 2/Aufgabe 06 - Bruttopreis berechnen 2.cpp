#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int _catMwst7 = 7;
    const int _catMwst19 = 19;

    int _catMwst;

    double _nettopreis, _bruttopreis7, _bruttopreis19;

    cout << "Erweiterten Sie das Programm zur Berechnung des Bruttopreises, um die Moeglichkeit auch mit dem ";
    cout << "geringeren Steuersatz von 7 % zu rechnen, falls es sich um entsprechende Produkte handelt.";
    cout << "Die Produktkategorie 1 oder 2 (1 -> 19 %, 2 -> 7 %) wird ueber eine Eingabe festgelegt.\n\n";


    //UserInput
    cout << "Bitte einen Preis angeben (z.B. 19.99) mit PUNKT ohne Waehrungsymbol: \n";
    cin >> _nettopreis;

    cout << "Bitte Mehrwertsteuer Kategorie waehlen ( 1 = Mwst 19% | 2 = Mwst 7%) \n";
    cin >> _catMwst;

    cout << "\n\n";

    switch (_catMwst) {

        // Mwst 19%
    case 1:

        _bruttopreis19 = (1 + _catMwst19 / 100.0) * _nettopreis;

        cout << "Rechnung: _bruttopreis19 = (1 + _mwst19 / 100) * _nettopreis;\n";
        cout << "Rechnung: _bruttopreis19 = (1 + " << _catMwst19 << " / 100) * " << _nettopreis << ";\n";

        cout << "19% | Ergebnis ohne setprecision: " << _bruttopreis19 << endl;
        cout << "19% | Ergebnis mit setprecision: " << fixed << setprecision(2) << _bruttopreis19 << "\n\n";

        break;

        // Mwst 7%
    case 2:

        _bruttopreis7 = (1 + 7 / 100.0) * _nettopreis;

        cout << "Rechnung: _bruttopreis7 = (1 + 7 / 100) * _nettopreis;\n";
        cout << "Rechnung: _bruttopreis7 = (1 + " << 7 << " / 100) * " << _nettopreis << ";\n";

        cout << "7% | Ergebnis ohne setprecision: " << _bruttopreis7 << endl;
        cout << "7% | Ergebnis mit setprecision: " << fixed << setprecision(2) << _bruttopreis7 << "\n\n";
        break;

        // Keine Kategorie gew�hlt
    default:
        cout << "Bitte eine MwSt Kategorie waehlen\n";
        break;

    }
}
