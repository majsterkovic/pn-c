#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char imie[15];
    char nazwisko[15];
    char kierunek[15];
    int rok;
    int numer;
};

void tworzTablice1(struct Student **adr, int size)
{
    *adr = (struct Student*) malloc(size*sizeof(struct Student));
    for(int i = 0; i<size; i++)
    {
        (*((*adr) + i)).numer = 0;
    }
}

struct Student *tworzTablice2(int size)
{
    struct Student *adr = ((struct Student*) malloc(size*sizeof(struct Student)));
    for(int i = 0; i<size; i++)
    {
        (*(adr + i)).numer = 0;
    }
    return adr;
}

struct Student *wstawStudent(struct Student *adr, struct Student s, int size)
{
    int i = 0;
    while(i < size)
    {
        if(adr[i].numer != 0)
        {
            i++;
        }
        else
        {
            break;
        }
        if(i > size)
        {
            return adr;
        }
    }
    *(adr + i) = s;
    return adr;
}

struct Student *usunStudent(struct Student *adr, int indeks, int size)
{
    int i = 0;
    while(i < size)
    {
        if((*(adr + i)).numer != indeks)
        {
            i++;
        }
        else
        {
            break;
        }
        if(i >= size)
        {
            return adr;
        }
    }
    (*(adr + i)).numer = 0;

    return adr;
}

struct Student *porzadkujTablice(struct Student *adr, int size)
{
    struct Student temp;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(strcmp((*(adr + i)).nazwisko, (*(adr  + j)).nazwisko) < 0)
            {
                temp = *(adr + i);
                *(adr + i) = *(adr + j);
                *(adr + j) = temp;
            }
            else if(strcmp((*(adr + i)).nazwisko, (*(adr + j)).nazwisko) == 0)
            {
                if(strcmp((*(adr + i)).imie, (*(adr + j)).imie) < 0)
                {
                    temp = *(adr + i);
                    *(adr + i) = *(adr + j);
                    *(adr + j) = temp;
                }
            }
        }
    }
    return adr;
}

void wypisz(struct Student *adr, int size)
{
    for(int i = 0; i<size; i++)
    {
        if( (*(adr + i)).numer != 0)
        {
            printf("Imie: %s\n", (*(adr + i)).imie);
            printf("Nazwisko: %s\n", (*(adr + i)).nazwisko);
            printf("Kierunek: %s\n", (*(adr + i)).kierunek);
            printf("Numer indeksu: %i\n", (*(adr + i)).numer);
            printf("Rok: %i\n\n", (*(adr + i)).rok);
        }
    }
}


int main()
{
    struct Student *Studenci1;
    struct Student **wskS = &Studenci1;

    tworzTablice1(wskS, 10);

    struct Student osoba1 = {"Jan", "Kowalski", "Informatyka", 1, 142100};
    wstawStudent(Studenci1, osoba1, 10);

    struct Student osoba2 = {"Adam", "Kowalski", "Informatyka", 1, 141111};
    wstawStudent(Studenci1, osoba2, 10);

    struct Student osoba3 = {"Anna", "Kamyk", "Informatyka", 1, 139785};
    wstawStudent(Studenci1, osoba3, 10);

    struct Student osoba4 = {"Jan", "Janicki", "Psychologia", 2, 100000};
    wstawStudent(Studenci1, osoba4, 10);

    struct Student osoba5 = {"Eryk", "Baran", "Informatyka", 1, 143123};
    wstawStudent(Studenci1, osoba5, 10);

    usunStudent(Studenci1, 100000, 10);
    porzadkujTablice(Studenci1, 10);

    wypisz(Studenci1, 10);

    free(Studenci1);

    Studenci1 = tworzTablice2(10);

    wstawStudent(Studenci1, osoba1, 10);
    wstawStudent(Studenci1, osoba2, 10);
    wstawStudent(Studenci1, osoba3, 10);
    wstawStudent(Studenci1, osoba4, 10);
    wstawStudent(Studenci1, osoba5, 10);

    usunStudent(Studenci1, 143123, 10);
    porzadkujTablice(Studenci1, 10);

    wypisz(Studenci1, 10);

   free(Studenci1);

}
