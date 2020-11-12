#include <iostream>
#include <iomanip>
using namespace std;

int Fehlercode=0;
char Vokal;


int main () {
  bool Bedingung=false;
  char Weiter='j';
  const int Maxzeichen=50;
  char Zeichenkette[Maxzeichen]="Drei Chinesen mit dem Kontrabass";
  char Vokal='a';
  char Vokale[12]="aeiouAEIOU";

 do {
        cout << "Bitte Vokal(aeiou) eingeben ";
        cin >> Vokal;
        switch (Vokal) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': for (int i=0; Zeichenkette[i]!='\0'; i=i+1) {
                        if (Zeichenkette[i]=='a' || Zeichenkette[i]=='e' ||
                            Zeichenkette[i]=='i'  || Zeichenkette[i]=='o' ||
                            Zeichenkette[i]=='u' ) {
                          Zeichenkette[i]=Vokal;
                        }
                          /* Alternative Lösung
                          for (int j=0; j < 6; j=j+1) {
                            if (Zeichenkette[i]==Vokale[j]) {
                               Zeichenkette[i]=Vokal;
                    }
                  }
                  */
                 }
                    cout << Zeichenkette << endl;
                    break;
      default:  cout << "Zeichen ist kein Vokal" << endl;
                    break;
        }

  cout << "Weiter ("<< Weiter << "=Ja, sonst=Nein) ";
  cin >> Weiter ;
  Bedingung=(Weiter=='j');
}  while(Bedingung);

    return Fehlercode;
 }
