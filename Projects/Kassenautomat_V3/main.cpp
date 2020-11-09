#include <iostream>
using namespace std;

// Globle Variable
double cost = 6.12, pay = 10.00;

const int change001 = 1;
const int change002 = 2;
const int change005 = 5;
const int change010 = 10;
const int change020 = 20;
const int change050 = 50;
const int change100 = 100;
const int change200 = 200;

int amount001 = 1;
int amount002 = 2;
int amount005 = 5;
int amount010 = 10;
int amount020 = 20;
int amount050 = 50;
int amount100 = 100;
int amount200 = 200;

int payback, rest;
int _count = 0;

int main() {
    bool _bcost = 0, _bpay = 0;

    do {
        if (_bcost == 0) {
            cout << "Bitte den Preis eingeben: ";
            cin >> cost;
            if (cost > 0) {
                _bcost = 1;
            }
            else if (cost < 0) {
                _bcost = 0;
                cout << "Bitte einen positiven Betrag eingeben\n";
                _count = _count + 1;
            }

        }

        if (_bpay == 0) {
            cout << "Bitte den Betrag eingeben: ";
            cin >> pay;
            if (pay < cost) {
                cout << "Betrag darf nicht kleiner als der Preis sein \n";
                _bpay = 0;

            }
            else if (pay < 0) {
                _bpay = 0;
                cout << "Bitte einen positiven Betrag eingeben\n";
                _count = _count + 1;

            }
            else if (pay > cost) {
                _bpay = 1;
            }
        }
    } while (_count != 3 && _bcost != 0 && _bpay != 0);

    

    if (_bcost == 1 && _bpay == 1) {

        payback = 100.0 * (pay - cost) + 0.5;

        amount200 = payback / change200;
        payback = payback % change200;

        amount100 = payback / change100;
        payback = payback % change100;

        amount050 = payback / change050;
        payback = payback % change050;

        amount020 = payback / change020;
        payback = payback % change020;

        amount010 = payback / change010;
        payback = payback % change010;

        amount005 = payback / change005;
        payback = payback % change005;

        amount002 = payback / change002;
        payback = payback % change002;

        amount001 = payback / change001;
        payback = payback % change001;

        rest = pay - cost;

        cout << "Restgeld: " << rest << " Euro \n";
        cout << "2,00 Euro: " << amount200 << "\n";
        cout << "1,00 Euro: " << amount100 << "\n";
        cout << "0,50 Euro: " << amount050 << "\n";
        cout << "0,20 Euro: " << amount020 << "\n";
        cout << "0,10 Euro: " << amount010 << "\n";
        cout << "0,05 Euro: " << amount005 << "\n";
        cout << "0,01 Euro: " << amount001 << "\n";

        cout << "\n\n";

    }
    else {
        cout << "FEHLER!!" << endl;
    }



}
