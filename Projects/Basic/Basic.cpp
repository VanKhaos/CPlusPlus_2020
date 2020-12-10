#include <iostream>
using namespace std;

/*  
Variablen Definition
Modifizierer Datentyp Bezeichner=Wert;

Datentypen bool, char, short, int oder long, long long, float, double & long double
Modifizierer const, signed(default und Ganzezahl) oder unsigned ( Ganzezahl)
Gültigkeitsbereich Global ausserhalb von {}

Zugriff auf diese Variablen mit ::Bezeichner
*/

// Globale Variable
int GlobaleZahl = 43; 
// Globale Konstante
const short GlobaleKonstante = 42; 

int main() {
	// Gültigeitsbereich lokal {}
	// int Zahl=2, Ergebnis, GlobaleZahl=53;
	int Zahl = 2;
	int Ergebnis;
	int GlobaleZahl = 53;
	double Kommazahl;
	const float Konstante = 1.19;
	// der Variablen Zeichen wird der Buchstabe D zugewiesen
	char Zeichen = 'D';

	// Eingabe von Daten
	cout << "Bitte zwei ganze Zahlen eingeben: ";
	// Daten müssen mit Leerzeichen getrennt sein
	cin >> Zahl >> GlobaleZahl;
	// abgerundent
	Ergebnis = (int)(Konstante * Zahl);

	// mit aufrunden => Ergebnis=(int)(Konstante*Zahl+0.5);
	cout << "Ergebnis=" << Ergebnis << endl;
	cout << GlobaleZahl << " " << ::GlobaleZahl << endl;
	::GlobaleZahl = GlobaleZahl + ::GlobaleZahl;
	Kommazahl = (double)(Konstante * Zahl);
	// neuer lokaler Gültigkeitsbereich
	{
		int GlobaleZahl = 42;
		cout << "GlobaleZahl hat jetzt den Wert: " << GlobaleZahl << endl;
	}

	cout << "GlobaleZahl hat jetzt den Wert: " << GlobaleZahl << endl;
	cout << "Wert von Kommazahl ist: " << Kommazahl << endl;
	cout << "Rest der Division von Zahl%3=" << Zahl % 3 << endl;
	cout << "Zahl-(int)(Zahl/3+0.5)*3=" << Zahl - (int)(Zahl / 3 + 0.5) * 3 << endl;
	cout << "Ganzzahliger Anteil Zahl/3=" << Zahl / 3 << endl;
	cout << 33 << "Dezimal ist das Zeichen (char)33 also " << (char)33 << endl;

	/*
	Zeichen 0 bis 31 sind Steuerzeichen
	\t Tabulator horizontale Positionierung
	\n Zeilenumbruch entspricht dem endl
	\b Backspace
	\0 ist das Zeichen zum Dezimalwert 0

	Maskierung von speziellen Zeichen
	\\ gibt den \ aus
	\' oder \" gibt das ' bzw. " in einem Text aus
	*/
	cout << 33 << "Dezimal ist das Zeichen \"(char)33\" also " << (char)33 << endl;

	return 0;
}