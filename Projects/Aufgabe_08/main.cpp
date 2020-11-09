#include <iostream>

using namespace std;

int main() {
    cout << "Schreiben Sie eine Schleife, die dem der Programm K�rper zun�chst einmal durchlaeuft und am Ende ";
    cout << "eine Abfrage erfolgt, ob ein erneuter Durchlauf gestartet werden soll.Wird die Frage mit Ja bzw J ";
    cout << "beantwortet erfolgt ein erneuter Durchlauf, ansonsten wird der Ablauf beendet.\n";
    cout << "Hinweis:\n";
    cout << "Die Wiederholung kann in alle bisherigen Loesungen eingebaut werden.Der Programmkoerper ist dann ";
    cout << "die vorhandene Funktionalitaet des jeweiligen Programms.Die Variablen Definition bleibt am Anfang ";
    cout << "des Programms vor der Schleife.\n\n";


    char _userAction;
    char _acceptJ = 'J';
    char _acceptJa = 'Ja';
    bool _action = false;

    do {
        /*

        PROGRAMM BLOCK

        */

        cout << "Weiter ? (J / Ja)";
        cin >> _userAction;

        // Löscht den Eingabepuffer
        cin.sync();

        // Prüft ob die Eingabe mit 'J' oder 'Ja' Bestätigt wurde und ob der Durchlauf kleiner 30 ist
        _action = (_userAction == _acceptJ) || (_userAction == _acceptJa);

    } while (_action);
}
