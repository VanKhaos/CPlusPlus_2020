#include <iostream>
#include <iomanip>
#include <cstdlib>

// Informationen zu der Klasse oder Objekttyp f�r die Dateibearbeitung
#include <fstream>
using namespace std;

int Fehlercode = 0;

int main() {
	fstream datei;
	fstream kopie;

	char text[50];
	double zahl1, zahl2;
	double zahlen[5];

	/* START AUFGABE A */
	cout << "Datenausgabe" << endl;

	// Datei zum Lesen �ffnen
	datei.open("daten.dat", fstream::in);

	// pr�fen, ob die Datei ge�ffnet ist
	if (datei.is_open()) { 

		for (int i = 0; i < 3; i = i + 1) {
			datei >> zahlen[i];
			cout << "Zahl aus daten.dat: " << zahlen[i] << endl;
		}

		// Datei schliessen
		datei.close(); 
	}
	/* END AUFGABE A */
	
	cout << "\n";
	
	/* START AUFGABE B */
	cout << "Daten kopieren" << endl;
	
	// Datei zum Lesen �ffnen
	datei.open("daten.dat", fstream::in);
	
	// Kopie zum Schreiben �ffnen
	kopie.open("kopie.dat", fstream::out);

	// Kopiert alle Datens�tzen aus der Datei daten.dat nach kopie.dat
	while (!datei.eof()) { 
		datei.getline(text, 50);
		kopie << text << endl;
	}
	cout << "Daten wurden kopiert und die Dateien geschlossen." << endl;
	kopie.close();
	datei.close();

	// Kontrolle von kopie.dat
	datei.open("kopie.dat", fstream::in);
	if (datei.is_open()) {
		for (int i = 0; i < 3; i = i + 1) {
			datei >> zahlen[i];
			cout << "Zahl aus kopie.dat: " << zahlen[i] << endl;
		}
		datei.close();
	}
	 /* END AUFGABE B */

	cout << "\n";

	/* START AUFGABE C */

	cout << "Datenschreiben in kopie.dat" << endl;
	datei.open("kopie.dat", fstream::app);
	
	// Hier w�re auch eine User Eingabe m�glich mit einer Schleife
	datei << 78.4 << ' ' << 66.6 << endl;
	cout << "Neue Zahlen in kopie.dat: 78.4 | 66.6" << endl;
		
	datei.close();
	cout << "Neue Daten wurden hinzugefuegt" << endl;

	// Kontrolle von kopie.dat
	datei.open("kopie.dat", fstream::in);
	if (datei.is_open()) {
		for (int i = 0; i < 5; i = i + 1) {
			datei >> zahlen[i];
			cout << "Zahl aus kopie.dat: " << zahlen[i] << endl;
		}
		datei.close();
	}
	/* END AUFGABE C*/
}
