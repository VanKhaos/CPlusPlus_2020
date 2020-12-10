#include <iostream>
/* 
Zufallszahlen
srand(long init) Initialisierung des Generator
long rand() ruft generierte Zufallszahl zwischen 0 und RAND_MAX ab 
die Konstante RAND_MAX maximale Zufallszahl
*/
#include <cstdlib> 

// long time(0) liefert die aktuelle Datum als Ganzezahl
#include <ctime> 

/* 
STRINGS
Objekttyp oder Klasse für die dynamischen Zeichenketten enthalten
*/
#include <string> 

/* 
statische Zeichenkette
char Zeichenkette[Anzahl] int length(char Zeichenkette[] 
const char* Zeichenkette* / ) Anzahl der Zeichenkette
*/
#include <cstring> 

// char *strcpy(char Destination[], const char Source[]) // entspricht einer Zuweisung
// char *strcat(char Destination[], const char Source[]); 
// Destination muss Groß genug sein um die weiteren Zeichen aufzunehmen
using namespace std;

/*
Zufallzahl generieren
// wird nur einmal aufgerufen
srand(time(0));
rand() eine Zahl zwischen 0 und RAND_MAX abrufen Aufruf beliebig

Modifizierer static die Variable ist gesamte Programmlaufzeit innerhalb einer Funktion vorhanden

dynamische Zeichenketten
Klasse string
Operatoren
Eingabe >> , Ausgabe <<, Verketten +, Zuweisung = und Element zugriff []

// Inputquelle cin oder Variable vom Type fstream Methode
getline(Inputquelle, string String)

// sucht innerhalb des Stings nach dem angegeben Zeichen
int find(char Suchzeichen, int Start=0);

// ersetzt die Position durch Anzahl Ersetzungszeichen
replace(int Position, int Anzahl, string Ersetzungszeichen);

// liefert Anzahl Zeichen ab Position zurück
substr(int Startposition, int Anzahlzeichen);

// liefert die Werte 1, 0, -1 zurück
compare(string Vergleichstext); 

// wandelt den numerischen Wert in einen String um
to_string(numerischer Wert);

// gibt die Anzahl an Zeichen innerhalb eines Strings zurück
length();

Zeichenkette die sich bei Bedarf automatisch vergrößern
Haben ein Grundgröße von 22 Byte

numerischer Wert stox(string Zeichenkette) x = c,l,f,d, ul

// liefert dann eine Ganzetzahl
stol(Zeichenkette); 
*/

double getZufallszahl() {
	static bool Init = true;

	// wird nur ein einziges mal Aufgerufen
	if (Init) {
		srand(time(0));
		Init = false;
	}
	return (((double)rand()) / RAND_MAX);
}

int main() {
	string Zeichenkette;
	int Position;
	
	// Zufallszahlen
	getZufallszahl();
	for (int i = 0; i < 10; i = i + 1) {
		// liefert 0 - RAND_MAX
		cout << rand() << endl;
		// liefert 0 - 1.0
		cout << (((double)rand()) / RAND_MAX) << endl;
		cout << getZufallszahl() << endl;
	}
	

	for (int i = 0; i < 10; i = i + 1) {
		// Zufallszahl zwischen 1 und 6 erzeugen
		cout << 1 + rand() % 6 << endl;
		cout << (int)(1.0 + 6.0 * getZufallszahl()) << endl;
	}
	//strings
	try {
		// liest eine Zeichenfolge von der Tastatur ein bsp.: Hello World!
		getline(cin, Zeichenkette);
		cout << Zeichenkette << endl;
		cout << "Länge der Zeichenkette " << Zeichenkette.length() << endl;
		
		// Zeichen suchen
		cout << "Zeichen \'a\' befindet sich an der Stelle " << Zeichenkette.find('a') << endl;
		Position = Zeichenkette.find('l');

		// gibt fünf Zeichen an Position aus
		cout << Zeichenkette.substr(Position, 5) << endl;
		// ersetzt e durch L
		cout << Zeichenkette.replace(Position, 1, "L") << endl;
		// gibt das Zeichen an der Stelle Position aus
		cout << Zeichenkette[Position] << endl;

		// Zeichenkette erweitern
		Zeichenkette = Zeichenkette + " Erweiterung";
		cout << Zeichenkette << endl;

		// Vergleicht zwei Strings
		cout << Zeichenkette.compare("Vergleichswert") << endl;

		// String & Zahlen
		string ZahlasString = "1234";
		long Zahl1 = stol(ZahlasString);
		ZahlasString = "23.23";
		double Zahl2 = stod(ZahlasString);
		Zahl2 = Zahl1 * Zahl2;
		cout << Zahl2 << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}