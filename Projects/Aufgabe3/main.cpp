#include <iostream>
#include <iomanip>

using namespace std;

// Globe Variable
const int mwst19 = 19;
const int mwst7 = 7;
double nettopreis, bruttopreis7, bruttopreis19;

int main() {
    cout << "Erstellen Sie ein Programm mit dem Sie von einem Nettopreis die Mehrwertsteuer und den daraus resultierenden Bruttopreis berechnen koennen.\n";
    cout << "Definieren Sie sich die entsprechenden Variablen.Legen Sie den Mehrwertsteuersatz als Konstante im Programm fest.\n";
    cout << "Der Nettopreis kann �ber die Tastatur eingelesen werden.\n\n";
    cout << "Hinweis:\n";
    cout << "Mit cout << fixed << setprecision(Anzahl Nachkommastellen) << wert; kann man den Preismit nur zwei Nachkommastellen ausgeben.\n";
    cout << "\n";
    cout <<	"Zusaetzliche Bibliothek : #include <iomanip> // std::setw(x), std::setprecision(x)\n\n";

    cout << "\n\n";

    //UserInput

    cout << "Bitte einen Preis angeben (z.B. 19.99) mit PUNKT ohne Waehrungsymbol: \n";
    cin >> nettopreis;

    cout << "\n\n";

    bruttopreis7 = (1 + mwst7 / 100.0) * nettopreis;

    cout << "Rechnung: bruttopreis7 = (1 + mwst7 / 100) * nettopreis;\n";
    cout << "Rechnung: bruttopreis7 = (1 + " << mwst7 << " / 100) * " << nettopreis << ";\n";

    cout << "7% | Ergebnis ohne setprecision: " << bruttopreis7 << endl;
    cout << "7% | Ergebnis mit setprecision: " << fixed << setprecision(2) << bruttopreis7 << "\n\n";

    bruttopreis19 = (1 + mwst19 / 100.0) * nettopreis;

    cout << "Rechnung: bruttopreis19 = (1 + mwst19 / 100) * nettopreis;\n";
    cout << "Rechnung: bruttopreis19 = (1 + " << mwst19 << " / 100) * " << nettopreis << ";\n";

    cout << "19% | Ergebnis ohne setprecision: " << bruttopreis19 << endl;
    cout << "19% | Ergebnis mit setprecision: " << fixed << setprecision(2) << bruttopreis19 << "\n\n";


}
