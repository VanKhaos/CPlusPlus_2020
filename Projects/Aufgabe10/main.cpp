#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int _ascii = 256;
    int _row;
    int _hex;
    char _zahl;


    cout << "Schreiben Sie ein Programm mit dem Sie sich die Zeichen des aktuellen Zeichensatzes der Konsole ";
    cout << "mit den Dezimalwerten 0 - 255 in einer Spalte ausgeben.Das Format soll die drei Spalten Dezimal, ";
    cout << "Hex - Wert und das Zeichen haben.\n\n";




    //cout << "Dez " << " | " << "Hex " << " | " << "Zeichen" << endl;
    cout << setw(3) << "Dez" << " | " << setw(3) << "Hex" << " | " << setw(3) << "Zeichen\n";

    for (int i = 0; i < 32; i++) {
        _row = i;

        while (_row <= 255) {

            if (_row < 32) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 32 && _row < 63) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 63 && _row < 95) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 95 && _row < 127) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 127 && _row < 160) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 160 && _row < 191) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 191 && _row < 223) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            } else if (_row >= 223 && _row < 256) {
                cout << setw(3) << dec << _row << " | "
                     << setw(3) << hex << _row << " | "
                     << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }

            _row = _row + 32;
        }
        cout << endl;


    }


    /*
    for (int i = 0 ,_hex = 0, _zahl = 0;i < _spalten, _hex < _spalten, _zahl < _spalten; _hex++, _zahl++, i++) {
        cout << setw(5) << dec << i << " | "
             << setw(5) << hex << _hex << " | "
             << setw(5) << char(_zahl);
    }
    */
}
