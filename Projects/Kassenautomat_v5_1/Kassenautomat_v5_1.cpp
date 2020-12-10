#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;


void MuenzenRest(double Preis, double Betrag);
int Muenzbestand[8];
char Trennzeichen = ',';




int main() {
    // Kassenautomat
    double Preis, Betrag;


    cout << "Bitte Preis eingeben "; cin >> Preis;
    cout << "Bitte Betrag eingeben "; cin >> Betrag;

    if (Preis > 0 && Preis < Betrag || Preis > 0 && Preis == Betrag) {
        MuenzenRest(Preis, Betrag);
    }
    else {
        for (int i = 3; i >= 1; i = i - 1) {
            cout << "(Fehler Eingabe) Sie haben noch " << i << " Wiederholung" << endl;
            cout << "Bitte Preis eingeben "; cin >> Preis;
            cout << "Bitte Betrag eingeben "; cin >> Betrag;
            if (Preis > 0 && Preis < Betrag || Preis > 0 && Preis == Betrag) {
                MuenzenRest(Preis, Betrag);

                return 0;
            }
        }
    }

    return 0;
}

void MuenzenRest(double Preis, double Betrag) {

    fstream datei;
    datei.open("Muenzbestand.dat", fstream::app);
    int rest, Muenzenwert[8] = { 200,100,50,20,10,5,2,1 }, Anzahl[8];
    rest = 100.0 * (Betrag - Preis) + 0.5;
    cout << "der Restbetrag ist :  " << (double)rest / 100 << " Euro" << endl;
    for (int i = 0; i < 8; i = i + 1) {
        if (datei.is_open()) {
            Anzahl[i] = rest / Muenzenwert[i];
            rest = rest % Muenzenwert[i];
            cout << Muenzenwert[i] << "Cent: " << Anzahl[i] << endl;
            datei >> Muenzenwert[i] >> Anzahl[i] >> Trennzeichen;
        }
    }
    datei.close();
}