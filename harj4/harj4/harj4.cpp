//Made by Toni Pajukanta

#include <iostream> // lisää input output stream niminen kirjasto
using namespace std; //lisää standardi nimiavaruus
//Määritellään vakiot
#define MINIMI 10 //Vanha vakion määritys
const int MAKSIMI = 20; //Uudempi tapa määritellä vakio (interger = luku)
//Julkiset muuttujat
int summa; //Määritellään muuttuja
//Aliohjelmien esittely
void Laske(int, int);
//Pääohjelma
void main()
{ //määritellään paikallisia muuttujia
	int luku1 = 2; //Muuttuja arvo on 2
	int luku2; //Määrittelee muuttujan ilma arvoa
	cout << "Syötä luku: "; //Tulostetaan käyttäjälle käsky
	cin >> luku2; //Käyttäjä lisää arvon "luku2" muuttujalle
	Laske(luku1, luku2); //Laskee luvut yhteen
	if (summa < MINIMI) // Vertaa summa arvoa MINIMI arvoon
		cout << "Summa on pienempi kuin MINIMI\n"; //Tulostaa jos if on totta
	if (summa > MINIMI) // Vertaa summa arvoa MINIMI arvoon
		if (MAKSIMI > summa) // Vertaa summa arvoa MAKSIMI arvoon
		cout << "Summa on MINIMIN ja MAKSIMIN valissa\n"; //Tulostaa jos kummatkin if ovat totta
	if (summa > MAKSIMI) // Vertaa summa arvoa MAKSIMI arvoon
		cout << "Summa on suurempi kuin MAKSIMI\n"; //Tulostaa jos if on totta
}
void Laske(int eka, int toka) //Aliohjelman määritys
{
	summa = eka + toka; //Määrittää että summan arvo on laske aliohjelmasta saatu arvo
}
