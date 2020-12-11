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



    /* LEHRER LÖSUNG
    cout << setw(5) << "   Dez" << setw(5) << " Hex" << setw(5) << "  Zeichen" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 0; i <= 255; i++)
    {
        switch (i) {
        case 0: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(48) << endl;
            break;
        case 7: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(97) << endl;
            break;
        case 8: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(98) << endl;
            break;
        case 9: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(116) << endl;
            break;
        case 10: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(110) << endl;
            break;
        case 11: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(118) << endl;
            break;
        case 12: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(102) << endl;
            break;
        case 13: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(114) << endl;
            break;
        default: cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(i) << endl;;
            break;
        }

    }

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    for (int i = 0; i <= 255; i = i + 8)
    {
        for (int j = i; j < i + 8; j++)
        {
            cout << setw(6) << char(j);
        }
        cout << endl;

    }
    */

    /* MEINE LÖSUNG */
    //cout << "Dez " << " | " << "Hex " << " | " << "Zeichen" << endl;
    for (int i = 0; i <= 255; i++) {

        cout << setw(5) << dec << i << setw(5) << hex << i << setw(5) << char(i < 32 ? 32 : i) << endl;

    }


    cout << setw(3) << "Dez" << " | " << setw(3) << "Hex" << " | " << setw(3) << "Zeichen\n";

    for (int i = 0; i < 32; i++) {
        _row = i;

        while (_row <= 255) {

            if (_row < 32) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 32 && _row < 63) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 63 && _row < 95) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 95 && _row < 127) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 127 && _row < 160) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 160 && _row < 191) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 191 && _row < 223) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }
            else if (_row >= 223 && _row < 256) {
                cout << setw(3) << dec << _row << " | "
                    << setw(3) << hex << _row << " | "
                    << setw(3) << char(_row < 32 ? 32 : _row) << " ";
            }

            _row = _row + 32;
        }
        cout << endl;


    }

}
