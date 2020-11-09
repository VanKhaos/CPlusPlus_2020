#include <iostream>

using namespace std;

int main() {
    int _userAction;
    unsigned long long _sum = 1;

    cout << "Erstellen Sie ein Programm mit dem Sie alle Ganzenzahlen von 1 bis n multiplizieren (1*2*3*...*n) ";
    cout << "wobei n ueber die Tastatur eingegeben werden soll.";
    cout << "Das Produkt soll dann ausgegeben werden.";
    cout << "Bedenken Sie, dass das Ergebnis sehr Gross werden kann.Waehlen Sie deshalb den passenden Datentyp aus.\n\n";

    cout << "Bitte eine ganze Zahl eingeben: \n";
    cin >> _userAction;




    for (int i = 1; i <= _userAction; i++) {
        _sum = _sum * i;
    }

    cout << "Produkt: " << _sum << endl;

    cin.sync();


}
