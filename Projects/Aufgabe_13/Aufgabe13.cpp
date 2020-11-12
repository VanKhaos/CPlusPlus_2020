#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode=0;

int main () {
  bool Bedingung=false;
  char Weiter='j';
  const int MaxZeichen=50;
  char Zeichenkette[MaxZeichen]="uhu";
  int Laenge=3;
  bool Palindrom=true;

 do {
     Palindrom=true;
      cout << "Bitte Zeichenkette eingeben " << endl;
      cin.getline(Zeichenkette, MaxZeichen);
      cin.clear();
      cin.sync();
      Laenge=cin.gcount()-1;

      for (int i=0; i  <  Laenge/2; i=i+1) {
        if (Zeichenkette[i]==Zeichenkette[Laenge-1-i]) {
          continue;
        }
        Palindrom=false;
        break;
      }
      cout << "Die Zeichenkette ist "  << (Palindrom?"":"k")
              << "ein Palindrom." << endl;


  cout << "Weiter ("<< Weiter << "=Ja, sonst=Nein) ";
  cin >> Weiter ;
  cin.sync();
  Bedingung=(Weiter=='j');
}  while(Bedingung);

    return Fehlercode;

}
