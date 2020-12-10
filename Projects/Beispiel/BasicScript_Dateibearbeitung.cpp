#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream> // Informationen zu der Klasse oder Objekttyp für die Dateibearbeitung
using namespace std;
/*
	open("Dateinamen", Modus); // öffnet die angegebene Datei
	Modus fstream::in Datei wird nur zum Lesen geöffnet, falls die Datei nicht vorhanden ist gibt's ein Fehler
	
	fstream::out Datei wird zum schreiben geöffnet, falls nicht vorhanden wird Sie angelegt wenn vorhanden wird der Inmhalt gelöscht
	fstream::app eine vorhandene Datei wird weiter geführt, bei nicht vorhanden angelegt

	is_open() mit der kann man prüfen, ob die geöffnet ist
	exceptions(ifstream::failbit) aktiviert die Fehlerbehandlung des Objekt für den Fehlertyp fail
	
	Operatoren
	Eingabe >> wir nur bis zum ersten Lerrzeichen gelesen wie cin
	Ausgabe <<
	getline(Text, Anzahl) // wie bei cin

	close() // die Datei wird geschlossen
	eof() // gibt an, ob das Ende der Datei erreicht wurde

	Methoden zur Fehlerabfrage
	fail() // werden angezeigte Fehlerzustände aus dem Objekt abgerufen
	bad()
	good() // wird zurückgeliefert wenn die Operation Ok war.
	
	Aufbau Daten.dat // Die Datei wird im Projekt gesucht wenn kein Pfad angegeben wurde
	25 123 345 123
	26 
*/
int Fehlercode = 0;

int main() {
	fstream Datei;
	fstream Kopie;
	char Text[50];
	int Zahl1, Zahl2;
	int Zahlen[2] = { 14,15 };
	Datei.open("Daten.dat", fstream::in); // Datei zum Lesen öffnen
	if (Datei.is_open()) { // prüfen, ob die Datei geöffnet ist
		Datei >> Zahl1 >> Zahl2; // Daten lesen Zahlen kann mit einer Schleife eingelesen werden
		Datei.close(); // Datei schliessen
	}
	
	cout << "Eingelesene Zahl ist " << Zahl1 << endl;
	cout << "Ausgabe in eine Datei" << endl;
	Datei.open("Daten.dat", fstream::out); // Datei wird zum Schreiben geöffnet Inhalt wird gelöscht
	for (int i = 0; i < 2; i = i + 1) {
		Datei << Zahlen[i] << ' ';
	}
	
	Datei << endl;
	Datei.close();
	cout << "Daten wurden geschrieben" << endl;
	
	cout << "Bestehende Datei weiter führen" << endl;
	Datei.open("Daten.dat", fstream::app);
	Datei << 24 << ' ' << 25 << endl;
	Datei.close();
	cout << "Neue Daten wurden hinzugefügt" << endl;
	
	cout << "Daten kopieren" << endl;
	Datei.open("Daten.dat", fstream::in);
	Kopie.open("Kopie.dat", fstream::out);
	while (!Datei.eof()) { // kopiert alle Datensätzen aus der Datei Daten.dat nach Kopie.dat.
		Datei.getline(Text, 50);
		Kopie << Text << endl;
	}
	Kopie.close();
	Datei.close();
	
	// Mit Exception
	Datei.exceptions(ifstream::failbit); // Aktiviert die Fehlerbehandlung
	try {
		Datei.open("Nichtvorhanden.dat", fstream::in);
		Datei >> Zahl1;
		Datei.close();
	}
	catch (exception& Fehler) { // erzeugter Fehler wird aufgefangen
		cout << Fehler.what() << endl; // gibt den Grund des Fehlers aus
	}
	return Fehlercode;
}
