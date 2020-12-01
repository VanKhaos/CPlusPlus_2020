#include <iostream>
#include <iomanip>
using namespace std;
// Wiederholungsfunktion
bool abfrageWiederholung(char weiter) {
    char zeichen;
    cout << "Weiter ( " << weiter << " )";
    cin >> zeichen;
    cin.sync();
    return (weiter == zeichen);
}