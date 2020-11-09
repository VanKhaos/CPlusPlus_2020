#include <iostream>

using namespace std;

// Globe Variable
int number1, number2, number3, sum;
const int static1 = 42;

int main() {
    cout << "Bitte zwei ganze Zahlen eingeben\n";

    // UserInput Number1
    cout << "Zahl 1: \n";
    cin >> number1;

    // UserInput Number2
    cout << "Zahl 2: \n";
    cin >> number2;

    cout << "\n";

    // Aufgabe A
    cout << "Aufgabe A\n";
    cout << "Addieren Sie zu der eingelesenen Zahl (V1) die Konstante (K1) und multiplizieren Sie das ";
    cout << "Ergebnis mit der Variablen V2, in die zuvor eine Zahl eingelesen wurde.\n";
    cout << "Geben Sie auch diese Ergebnis aus.\n\n";

    cout << "Rechnung: _sum = _number1 + _static1;\n";
    cout << "Rechnung: _sum = " << number1 << " + " << static1 << ";\n";

    sum = number1 + static1;

    cout << "Ergebnis: " << sum << endl;

    cout << "Rechnung: _sum =  _sum * _number2;\n";
    cout << "Rechnung: _sum = " << sum << " * " << number2 << ";\n";

    sum = sum * number2;

    cout << "Ergebnis: " << sum << endl;

    cout << "\n\n";


    // Aufgabe B
    cout << "Aufgabe B\n";
    cout << "Lassen Sie sich auch von der eingelesenen Ganzzahl (V1) den Rest der Division durch 3 und ";
    cout << "den ganzzahligen Anteil der Division durch 3 ausgeben.\n\n";

    sum = number1 % 3;

    cout << "Rechnung: _sum = _number1 % 3;\n";
    cout << "Rechnung: _sum = " << number1 << " % 3;\n";
    cout << "Ergebnis: " << sum << endl;
    cout << "\n";

    sum = number1 / 3;
    cout << "Rechnung: _sum = _number1 / 3;\n";
    cout << "Rechnung: _sum = " << number1 << " / 3;\n";
    cout << "Ergebnis: " << sum << endl;

    cout << "\n\n";

    // Aufgabe C
    cout << "Aufgabe C\n";
    cout << "Was passiert wenn man den Ausdruck K1=V1*K1; berechnen moechte?\n\n";

    cout << "Da die K1 (_static1) eine Konstante ist, kann man diesen Wert nicht neu zuweisen.\n";

    cout << "\n\n";

    // Aufgabe D
    cout << "Aufgabe D\n";
    cout << "Dividieren Sie 1 durch die eingelesene Ganzzahl V2 (Kehrwert 1/V2) und weisen Sie das ";
    cout << "Ergebnis der Variablen(V3) zu.\n";
    cout << "Lassen Sie sich das Ergebnis auf der Konsole ausgeben.\n\n";

    number3 = (1 / number2);
    cout << "Variable3 (_number3) wird lokal neu als float initializiert.\n";
    cout << "Rechnung: _number3 = (1 / _number2);\n";
    cout << "Rechnung: _number3 = (1 / " << number2 << ");\n";
    cout << "Ergebnis: " << number3 << endl;


    cout << "\n\n";

    // Aufgabe E
    cout << "Aufgabe E\n";
    cout << "Welchen Datentyp muss die Variable Ergebnis haben, so dass diese den Wert vom Kehrwert speichern kann ?\n";
    cout << "Definieren Sie diese Variable z.B.Kehrwert, initialisieren die Variable mit Eins\n";
    cout << "und weisen dieser dann Ergebnis der Kehrwertbildung(Kehrwert / V2) zu.\n\n";

    float _reciprocal = 1;

    _reciprocal = _reciprocal / number2;

    cout << "Rechnung: _reciprocal = _reciprocal / _number2;\n";
    cout << "Rechnung: _reciprocal = " << _reciprocal << " / " << number2 << ";\n";
    cout << "Ergebnis: " << _reciprocal << endl;
}
