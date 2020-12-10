#include <iostream>
using namespace std;

int main() {
	/*
	einfach Verzeigung
	if (Bedingung) {}
	else {}
	
	Bedingung ist Variable Operator Vergleichswert
	Operator >,<,>=,<=, != oder ==
	Logische Operator || (oder), && (und) oder !(nicht)
	
	Konditional Operator
	Bedingung ? Ja - Wert : Nein - Wert;
	
	Wert=Bedingung?Ja-Wert:Nein-Wert;
	*/
	
	int Fehlercode = 0;
	double Zahl;
	
	// Anwendung Konditional Operator
	Fehlercode = (Fehlercode == 0 ? 1 : -1);
	
	cout << (Fehlercode == 1 ? "k" : "") << "ein Fehler" <<	endl;
	// Ausgabe: keinFehler
	// 1 => -1 Ausgabe: ein Fehler
	
	cout << "Bitte Zahl ungleich 0 eingeben: ";
	cin >> Zahl;
	if (Zahl != 0) {
		Zahl = 1 / Zahl;
		cout << "Der Kehrwert lautet " << Zahl << endl;
	} else {
		cout << "Von " << Zahl << " kann kein Kehrwert berechnet werden." << endl;
		Fehlercode = -1;
	}
	/*
	mehrfach oder verschachtelte Verzweigung
	if (Bed1) {
		Anweisung;
	if (Bed2) {
		Anweisung
	} else {
		Anweisung;
	} 
	// END Bed2
	} else {
		Anweisung;
	} 
	// END Bed1

	Fallunterscheidung
	if (Bed1) {
		Anweisung;
	} else if (Bed2) {
		Anweisung;
	} else {
		// optional
		Anweisung;
	} 
	// END Bed1
	
	*/
	
	{
		int Monat;
		cout << "Bitte Zahl zwischen 1 und 12 eingeben: ";
		cin >> Monat;
		if (Monat >= 1 && Monat <= 3) {
			cout << "Monat " << Monat << " liegt im Quartal I" << endl;
		} else if (Monat >= 4 && Monat <= 6) {
			cout << "Monat " << Monat << " liegt im	Quartal II" << endl;
		} else if (Monat >= 7 && Monat <= 9) {
			cout << "Monat " << Monat << " liegt im	Quartal III" << endl;
		} else if (Monat >= 10 && Monat <= 12) {
			cout << "Monat " << Monat << " liegt im Quartal IV" << endl;
		} else {
			cout << "Kein gueltiger Monat" << endl;
			Fehlercode = -1;
		}
	/*
	Fallunterscheidung Variable == Vergleichswert
	switch (Variable) {
		case Fall1: Anweisung; break;
		case Falln: Anweisung; break;
		default: Anweisung; break;
	}

	Fall ist eine Konstante Fester Wert z.B. 12 oder Benannte Konstante
	const Datentyp Bezeichner=Wert;
	case 12:
	case Bezeichner:
	case 'A':
	
	Datentype von Fall sind Zeichen oder Ganzzahle zugelassen keine Zeichenketten oder Kommazahlen
	*/

		const int Januar = 1;
		switch (Monat) {
			case Januar:
			case 2: cout << "Monat endet auf \'r\' es darf Fisch gegessen werden." << endl;
			case 3: cout << "Monat " << Monat << " liegt im 1. Quartal" << endl;
					break;
			case 4:
			case 5:
			case 6: cout << "Monat " << Monat << " liegt im 2. Quartal" << endl;
					break;
			case 7:
			case 8:
			case 9: cout << "Monat " << Monat << " liegt im 2. Quartal" << endl;
					break;
			case 10:
			case 11:
			case 12: cout << "Monat " << Monat << " liegt im 2. Quartal" << endl;
					break;
			default: cout << "ungueltiger Monat" << endl;
			}
		}
	return Fehlercode;
} // end main