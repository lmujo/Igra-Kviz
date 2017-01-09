#include <iostream>
#include <conio.h>
#include <windows.h>

// Header koji navodi da su neke varijable "extern" oblika
#include "extern_varijable.h"
#include "igra.h"

using namespace std;

int igra()
{
    //Korisnicke varijable
    unsigned int odabir; // int bez predznaka, dakle > 0

     // Ciscenje ekrana
    system("cls");

    // Uputa za odgovaranje na pitanja
    cout << "Na pitanja odgovarajte sa slovom/brojem koji se nalazi unutar crtica (- -).\nNpr., za \"- a - ...\" odgovarate sa \"a\". Pritisni tipku Enter za nastavak..." << endl;
    getch();
    system("cls");

    // Petlja koja se okrece dok god se ne pojavi "break"
    while(true)
    {

        // Nude se opcije (novi red koda je for readability's sake)
        cout << imeIgraca << ", odaberi kategoriju koju zelis imati...\n- 1 - Geografija\n- 2 - Dogadaji u svijetu\n- 3 - Povijest\n- 4 - Filmska industrija\n- 5 - Informatika";
        cout << "\n- 6 - Sport\n- 7 - Znanost\n- 8 - Muzicka industrija\n- 9 - Knjizevnost\n- 10 - Nasumicni odabir kategorija\n- 0 - Izlazak iz igre\n\nTvoj odabir je: ";

        // Trazi se korisnicki odabir
        cin >> odabir;

        // Cisti se stream od \n znaka (kada se pritisne tipa "Enter") koji bi smetao u sljedecem unosu
        cin.ignore();

        // Ciscenje ekrana kako bi se moglo prikazati ime odabrane kategorije
        system("cls");

        // U sljedecih nekoliko IF-ova se prikazuju odabrane kategorije te se zapocinje igra u odredjenoj kategoriji
        if(odabir == 1)
        {
            cout << "Pitanja iz kategorije Geografija. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            geografija();
            break;
        }

        else if(odabir == 2)
        {
            cout << "Pitanja iz kategorije Dogadaji u svijetu. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 3)
        {
            cout << "Pitanja iz kategorije Povijest. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 4)
        {
            cout << "Pitanja iz kategorije Filmska industrija. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 5)
        {
            cout << "Pitanja iz kategorije Informatika. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 6)
        {
            cout << "Pitanja iz kategorije Sport. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 7)
        {
            cout << "Pitanja iz kategorije Znanost. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 8)
        {
            cout << "Pitanja iz kategorije Muzicka industrija. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 9)
        {
            cout << "Pitanja iz kategorije Knjizevnost. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 10)
        {
            cout << "Odabran je nasumicni izbor pitanja. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        else if(odabir == 0)
        {
            cout << "Odabran je izlazak iz igre. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            break;
        }

        // U slucaju krivog odabira sve krece ponovno
        else
        {
            cout << "Odabran je krivi broj, pokusaj ponovno. Pritisni tipku Enter za nastavak..." << endl;
            getch();
            system("cls");
        }

    }

    return 0; // Mozda da se doda neki posebni return? Tipa 0 za success i 1 za failure?

}
