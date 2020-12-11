#include <iostream>

using namespace std;

int main() {
    int _userAction;
    unsigned long long _sum = 1;

    cout << "Bitte eine ganze Zahl eingeben: \n";
    cin >> _userAction;




    for (int i = 1; i <= _userAction; i++) {
        _sum = _sum + i;
    }

    cout << "Produkt: " << _sum << endl;

    cin.sync();


}
