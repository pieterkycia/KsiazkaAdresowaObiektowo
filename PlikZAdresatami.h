#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy {
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik();
    void zmienNazwePliku();
    void pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami), NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI("TymczasowyPlikZAdresatami") {};

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int idUsuwanegoAdresata);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunWybranegoAdresataZPliku(int idAdresata);
    void edytujWybranegoAdresataWPliku(Adresat adresat, string liniaZDanymiAdresata);
};

#endif // PLIKZADRESATAMI_H
