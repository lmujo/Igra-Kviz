#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

// Ukljucuje se header (.h) kako bi se mogle koristiti neke funkcije (u ovom slucaju igra();)
#include "igra.h"

// Header koji navodi da su neke varijable "extern" oblika
#include "extern_varijable.h"

using namespace std;

// Tu se jedini put navodi ova varijabla, a posto je ona u .h deklarirana kao "extern" moze se koristiti u svakoj funkciji projekta
string imeIgraca;
int brojPitanja[5];
int bodovi;

int main()
{

    // Trazi se ime igraca
    cout << "Unesi svoje ime: ";

    // Sami cin se prekida kod razmaka, ali getline cita cijelu liniju unosa (bar mislim lol)
    getline(cin, imeIgraca);
    //cin.ignore();

    igra();

}
