/// U slucaju da nesto nije razumljivo preporucam da se pogleda, za pocetak, http://www.cplusplus.com/doc/tutorial/arrays/
/// program sluzi za mijesanje brojeva
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>

// Header koji navodi da su neke varijable "extern" oblika
#include "extern_varijable.h"

using namespace std;

void odabirNasumicnihBrojeva()
{
    // Odabir kolicine brojeva (unutar []) te odredjivanje brojeva (0 - 9)
    int brojevi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Unos varijabli potrebnih za izvodjenje randomizacije
    int zamjena;
    int privremeno;

    // Postavlja se novi seed kako bi se svaki put dobili razliciti rezultati
    srand(time(NULL));

    for (int i=9; i > 0; i--)
    {

        // zamjena je nasumicni broj
        zamjena = rand() % i;

        // Mijenjaju se mjesta brojevi[i] sa brojevi[zamjena]
        privremeno = brojevi[i];
        brojevi[i] = brojevi[zamjena];
        brojevi [zamjena] = privremeno;

    }

    // kopiranje prvih n brojeva (u ovom slucaju 5) iz brojevi[i] u brojPitanja[i]
    for(int i=0; i<5; i++)
    {
    brojPitanja[i] = brojevi[i];
    cout << brojPitanja[i] << " ponavljanje " << i << endl; //sluzilo je za provjeru nasumicnosti
    }
}
