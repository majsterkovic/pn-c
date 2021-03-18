#include <stdio.h>
#include <stdbool.h>

int main()
{
    double liczba1;
    double liczba2;
    int dzialanie;
    double wynik;

    do {
        printf("Witaj w kalkulatorze!\n");

        printf("Wybierz dzialanie\n");
        printf("[1] dodawanie\n");
        printf("[2] odejmowanie\n");
        printf("[3] mnozenie\n");
        printf("[4] dzielenie\n");
        printf("[5] rezygnuj\n");

        scanf("%i", &dzialanie);
        
        printf("Wprowadz pierwsza liczbe\n");
        scanf("%lf", &liczba1);
        printf("Wprowadz druga liczbe\n");
        scanf("%lf", &liczba2);
        

        switch (dzialanie) {
            case 1:
                wynik = liczba1 + liczba2;
                break;
            case 2:
                wynik = liczba1 - liczba2;
                break;
            case 3:
                wynik = liczba1 * liczba2;
                break;
            case 4:
                wynik = liczba1 / liczba2;
                break;
            case 5:
                break;
        }
        if(dzialanie != 5){
            printf("Wynik: %lf\n", wynik);
        }

    }while(dzialanie != 5);

    return 0;
}