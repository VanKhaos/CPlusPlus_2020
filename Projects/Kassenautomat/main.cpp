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

int main() {

    cout << "Bitte den Preis eingeben: ";
    cin >> cost;

    cout << "Bitte den Betrag eingeben: ";
    cin >> pay;


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

}
