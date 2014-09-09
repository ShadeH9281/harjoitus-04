#include <iostream> // lis‰‰ input output stream niminen kirjasto
using namespace std; //lis‰‰ standardi nimiavaruus
//M‰‰ritell‰‰n vakiot
#define MINIMI 10 //Vanha vakion m‰‰ritys
const int MAKSIMI = 20; //Uudempi tapa m‰‰ritell‰ vakio (interger = luku)
//Julkiset muuttujat
int summa; //M‰‰ritell‰‰n muuttuja
//Aliohjelmien esittely
void Laske(int, int);
//P‰‰ohjelma
void main()
{ //m‰‰ritell‰‰n paikallisia muuttujia
	int luku1 = 2; //Muuttuja arvo on 2
	int luku2; //M‰‰rittelee muuttujan ilma arvoa
	cout << "Syˆt‰ luku: "; //Tulostetaan k‰ytt‰j‰lle k‰sky
	cin >> luku2; //K‰ytt‰j‰ lis‰‰ arvon "luku2" muuttujalle
	Laske(luku1, luku2); //Laskee luvut yhteen
	if (summa < MINIMI) // Vertaa summa arvoa MINIMI arvoon
		cout << "Summa on pienempi kuin MINIMI\n"; //Tulostaa jos if on totta
	if (summa > MINIMI) // Vertaa summa arvoa MINIMI arvoon
		if (MAKSIMI > summa) // Vertaa summa arvoa MAKSIMI arvoon
		cout << "Summa on MINIMIN ja MAKSIMIN valissa\n"; //Tulostaa jos kummatkin if ovat totta
	if (summa > MAKSIMI) // Vertaa summa arvoa MAKSIMI arvoon
		cout << "Summa on suurempi kuin MAKSIMI\n"; //Tulostaa jos if on totta
}
void Laske(int eka, int toka) //Aliohjelman m‰‰ritys
{
	summa = eka + toka; //M‰‰ritt‰‰ ett‰ summan arvo on laske aliohjelmasta saatu arvo
}