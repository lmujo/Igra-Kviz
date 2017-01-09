#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

#include "extern_varijable.h"
#include "igra.h"

using namespace std;

string odgovor;

// koristim void zato sto mislim da ne zahtijeva return... nisam siguran
void geografija()
{

    odabirNasumicnihBrojeva();

    cout << brojPitanja[2];
    getch();

    // bira se 5 pitanja koja su pod brojem koji spada na jedno od 5 mjesta u arrayu
    for(int i = 0; i < 5; i++)
    {
        /// Sljedeci komentari se odnose na isti nacin i na ostale clanove ove "for" petlje, a iznimke (ako ih ima) ce biti oznacene
        // redni broj pitanja ˇ
        if (brojPitanja[i] == 0)
        {
            // Odgovaranja na pitanje
            cout << "Koji je glavni grad Australije?\n- a - Melbourne\n- b - Columbia\n- c - Sydney\n- d - Canberra\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            // Provjera je li upisan tocan odgovor
            if (odgovor == "d")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            // U slucaju krivog odgovora na pitanje
            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 1)
        {
            cout << "U kojem kvadrantu (u odnosu na nulti meridijan i ekvator) se nalazi Bolivija?\n- a - I (SI)\n- b - II (SZ)\n- c - III (JZ)\n- d - IV (JI)\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "c")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 2)
        {
            cout << "Koji je najveci kontinent?\n- a - Rusija\n- b - Afrika\n- c - Azija\n- d - Europa\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "c")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 3)
        {
            cout << "Koji je najveci ocean na svijetu?\n- a - Atlantski ocean\n- b - Pacificki ocean\n- c - Indijski ocean\n- d - Jadransko more\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "b")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 4)
        {
            cout << "Koliko je, otprilike, stara Zemlja?\n- a - Oko 4.54 milijardi godina\n- b - Oko 6.19 tisuca godina\n- c - Oko 13.79 milijardi godina\n- d - Oko 3.72 milijardi godina\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "a")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 5)
        {
            cout << "Kako se zove krak galaksije u kojem se nalazi Suncev sustav?\n- a - Strijelcev krak\n- b - Orionov krak\n- c - Vanjski krak\n- d - Persejev krak\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "b")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 6)
        {
            cout << "Koje je ime galaksije koja ce se sudariti sa Mlijecnom stazom?\n- a - Veliki Magellanov oblak\n- b - Mali Magellanov oblak\n- c - Andromeda\n- d - Cigar galaksija\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "c")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 7)
        {
            cout << "Koje drzava nije jedna od utemeljiteljica Europske zajednice za ugljen i celik (danasnja EU)?\n- a - Francuska\n- b - Luksemburg\n- c - Belgija\n- d - Danska\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "d")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 8)
        {
            cout << "Koliko je ljudi na zemlji?\n- a - Oko 7.4 milijuna\n- b - Oko 8.2 milijarde\n- c - Oko 6.9 milijardi\n- d - Oko 7.5 milijardi\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "d")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

        if (brojPitanja[i] == 9)
        {
            cout << "Koja drzava ima najvise stanovnika?\n- a - Brazil\n- b - Kina\n- c - SAD\n- d - Indija\n\nTvoj odabir je: ";
            getline(cin, odgovor);
            //cin.ignore();
            system("cls");

            if (odgovor == "b")
            {
                cout << "Tocan odgovor! Dobivas 1 bod." << endl;
                bodovi = bodovi + 1;
                cout << "Trenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

            else
            {
                cout << "Krivi odgovor, ne dobivas bodove.\nTrenutni broj bodova je: " << bodovi << "\nPritisni tipku Enter za nastavak..." << endl;
                getch();
            }

        }

    }

}

void dogadaji_u_svijetu()
{

}

void povijest()
{

}

void filmska_industrija()
{

}

void informatika()
{

}

void sport()
{

}

void znanost()
{

}

void muzicka_industrija()
{

}

void knjizevnost()
{

}

void nasumicni_odabir()
{

}
