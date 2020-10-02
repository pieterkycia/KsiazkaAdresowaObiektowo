#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    void ustawId(int id);
    void ustawIdUzytkownika(int idUzytkownika);
    void ustawImie(string imie);
    void ustawNazwisko(string nazwisko);
    void ustawNumerTelefonu(string numerTelefonu);
    void ustawEmail(string email);
    void ustawAdres(string adres);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif // ADRESAT_H
