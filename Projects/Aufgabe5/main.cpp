#include <iostream>

using namespace std;

int main() {
    int _number1, _number2, _number3, _sum;
    float _reciprocal = 1;

    cout << "Erweitern Sie das Programm aus Aufgabe 1 mit der Pr�fung des Eingabewertes bzgl. 0 und geben ";
    cout << "Sie in diesem Fall die Fehlermeldung 'Berechnung des Kehrwertes von 0 nicht m�glich!' aus und ";
    cout << "brechen das Programm ab.Ansonsten wird der Kehrwert berechnet und ausgegeben. \n\n";

    cout << "Bitte eine ganze Zahlen eingeben: \n";

    // UserInput Number2
    cin >> _number1;

    // CHECK USERINPUT

    if (_number1 == 0) {
        cout << "Berechnung des Kehrwertes von 0 nicht moeglich!";
        cout << "\n\n";
    }
    else {
        _reciprocal = _reciprocal / _number1;

        cout << "Rechnung: _reciprocal = _reciprocal / _number2;\n";
        cout << "Rechnung: _reciprocal = " << _reciprocal << " / " << _number1 << ";\n";
        cout << "Ergebnis: " << _reciprocal << endl;

        cout << "\n\n";
    }

}
