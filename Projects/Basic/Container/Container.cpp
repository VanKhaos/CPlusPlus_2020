#include <iostream>

/* Container */
// statische Liste
#include <array>

// dynamische Liste | Es können nachträglich Elemente hinzugefügt werden
#include <vector>

// dynamische Liste mit sortier Funktion
#include <list>

// Eine Liste mit Key/Value Paare | Der Index ist ein Schlüssel den man selbst festlegen kann
#include <map>


using namespace std;


/*
Die Objekttypen sind Templates (Vorlagen)

Syntax:
    Klasse<Elementtyp, ...> Bezeichner = Wert;
    Elementtyp ist Elementarer-, Objekt oder Selbstdefiniertetypen

Beispiel:
statische Liste mit 8 Elementen vom Typ int

    array<int, 8> Liste = { 1, 2, 3, 5};

Für alle Container Typen
    Operatoren
        = Zuweisung z.B.
        array<int, 8> Liste = { 1, 2, 3, 5};
        array<int, 8> Kopie = Liste;

        Es gibt kein +
    
    Zugriff auf Element
        [] Index Kopie[0] auf das erste Element von Kopie zugreifen
        alternativ at(Index)

    Vergleichsoperatoren
        <, >, <=, >=, != oder ==
        Beispiel:
        Liste == Kopie
        true wenn die Listen die gleiche Größe und vom Inhalt  identisch sind, ansonsten false

Ein-/Ausgabe Elementweise << & >>


Methoden sind Funktionen die in Verbindung mit einem Objekt genutzt werden
    size()                          | liefert die Anzahl an Elementen in dem Objekt
    empty()                         | ist true wenn das Objekt leer ist
    max_size()                      | liefert die maximale Anzahl an Elementen die im dem Objekt angelegt werden können


Iterator ist für Schleifen verarbeitung gedacht
    begin()                         | liefert das erste Element im Objekts
    end()                           | liefert das letzte Element im Objekt



Für Listen & Vector
    push_back(Element)              | fügt ein Element nach dem letzten Element hinzu
    pop_back(Element)               | entfernt das jeweils letzte element

    insert(Element)                 | fügt ein Element an einer bestimmten Position
    erase(Element)                  | löscht ein Element an einer bestimmten Position
    clear()                         | löscht alle Elemente des Objekts

Nur für Listen
    sort()                          | sortiert die Elemente in dem Objekt
    unique()                        | entfernt alle doppelten Elemente in dem Objekt


Map
Syntax:
    map<keytype, valuetyp> Bezeichner;
Beispiel:
    map<string, float> Woerterbuch = {Liste mit Key/Value Paaren);
    Definiert eine Liste (Woerterbuch) mit schlüsseln vom Typ string und Werten vom Typ float

Key/Value Paar
    pair<keytyp, valuetyp> Bezeichner = Wert;
pair enthält zwei Elemente (first, second)
    first   => Key
    second  => Value

Methoden für Map
    find(key)                       | liefert das jeweilige Key/Value Paar in der Liste

Zugriff auf Map
    Indexoperator [Key]             | liefert den Wert des jeweiligen Key/Value Paares zurück

Verschachtelte Container
    vector<map<keytype, valuetyp>> Bezeichner = Wert;
        Zweidimensionales Feld
        Zeile ist der Vector
        Spalte sind die Map Elemente


*/

int main() {
    // Eine statische Liste mit 8 Elemente vom Typ int
    // Nur die ersten vier sind initialisiert
    array<int, 8> liste1 = { 1, 2, 3, 4 };

    // Eine zweite statische Liste mit 8 Elemente vom Typ int
    // Ohne Initialisierung
    array<int, 8> liste2;

    // Dynamische Liste die Leer sind
    vector<double> vector1;
    vector<double> vector2;

    // Dynamische Liste mit Inhalt
    list<float> sortierteListe = { 34,45,3.14,100.12 };
    pair<string, double> paar = { "1", 1.0 };
    map<string, double> woerterbuch = { paar };

    // Ausgabe
    cout << "Elemente in der Liste " << endl;
    cout << "Array  " << liste1.size() << endl;
    cout << "Vector " << vector1.size() << endl;
    cout << "List   " << sortierteListe.size() << endl;
    cout << "Map    " << woerterbuch.size() << endl;

    // Zuweisung
    liste2 = liste1;

    // Vergleich von Listen
    if (liste1 == liste2) {
        cout << "Listen sind identisch" << endl;
    }

    // Erweiterung um ein Element | Hinzufügen
    vector1.push_back(23.12);
    cout << "Vector " << vector1.size() << endl;

    woerterbuch.insert(pair<string, double>("2", 2.0));
    cout << "Map    " << woerterbuch.size() << endl;

    // Ausgabe einer Liste
    for (array<int, 8>::iterator it = liste1.begin(); it != liste1.end(); it = it + 1){
        cout << *it << ' ';
    }
    cout << endl;

    // Alternativ Ausgabe einer Liste
    for (int i : liste1) {
        cout << i << ' ';
    }
    cout << endl;

    // Liste sortieren
    sortierteListe.sort();
    for (float i : sortierteListe) {
        cout << i << ' ';
    }
    cout << endl;

    // einfache Map ausgabe
    for (pair<string, double> i : woerterbuch) {
        cout << "Key: " << i.first << ' ' << "Value: " << i.second << endl;
    }

    // Map befüllen
    vector<string> eigentschaften = { "Nachname","Vorname","Geschlecht" };
    pair<string, string> meier = { "Nachname", "Meier" };
    map<string, string> person = { meier };
    person.insert(pair<string, string> { "Vorname", "Otto" });
    person.insert(pair<string, string> { "Geschlecht", "m" });
    vector<map<string, string>> personenliste = { person };

    // erweiterte Map ausgabe
    for (map<string, string> p : personenliste) {
        for (string key : eigentschaften) {      
            cout << p[key] << " ";
        } 
        cout << endl;
    }

    // Mapinhalt von Person löschen
    person.clear();

    // Map (Person) per Benutzereingabe befüllen
    for (int i = 0; i < eigentschaften.size(); i = i + 1) {
        string wert;
        cout << "Bitte " << eigentschaften[i] << " eingeben: ";
        cin >> wert;
        person.insert(pair<string, string> { eigentschaften[i], wert });
    }
    // Person in Personenliste Hinzufügen
    personenliste.push_back(person);

    // erweiterte Map ausgabe nach Benutzereingabe
    for (map<string, string> p : personenliste) {
        for (string key : eigentschaften) {
            cout << p[key] << " ";
        }
        cout << endl;
    }


    return 0;
}
