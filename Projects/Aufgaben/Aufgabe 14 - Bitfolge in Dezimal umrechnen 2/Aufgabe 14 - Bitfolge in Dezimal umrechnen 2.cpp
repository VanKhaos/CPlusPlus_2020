#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode = 0;

int main() {
	bool Bedingung = false;
	char Weiter = 'J';

	unsigned long long Dez[64];
	char Bitfolge[65];
	unsigned long long Dezimalwert = 0;
	int AnzahlBits = 0;
	Dez[63] = 1;

	for (int i = 0; i < 63; i = i + 1) {
		Dez[62 - i] = 2 * Dez[63 - i];
	}
	do {
		// Aufgabe 14
		Dezimalwert = 0;
		cout << "Bitte Bitfolge eingeben" << endl;
		cin.getline(Bitfolge, 65);
		cin.clear();
		cin.sync();
		AnzahlBits = cin.gcount() - 1;
		cout << "Es wurden " << AnzahlBits << " eingegeben." << endl;
		for (int i = 0; i < AnzahlBits; i = i + 1) {
			if (Bitfolge[i] == '0' || Bitfolge[i] == '1') {
				Dezimalwert = Dezimalwert + (Bitfolge[i] - '0') * Dez[64 - AnzahlBits + i];
			}
			else {
				cout << Bitfolge[i] << " ist ein ungueltiger Bitwert" << endl;
				break;
			}
		}

		cout << "Dezimalwert der Bitfolge ist " << Dezimalwert << endl;
		cout << "Weiter (" << Weiter << "=Ja,sonst=Nein) ";

		cin >> Weiter;
		cin.sync();
		Bedingung = (Weiter == 'J');

	} while (Bedingung);

	return Fehlercode;

}