#include <stdio.h>
#include <stdbool.h>

void menu()
{
    printf("Co chcesz zrobic?\n");
    printf("Wpisz 1, aby wybrac zadanie 1 lub 2, aby wybrac zadanie 2\n");
    printf("Wpisz 3, aby zakonczyc dzialanie programu.\n");
}

void zadanie1()
{
    printf("Dzisiaj jest sroda.\n");
}

void zadanie2()
{
    printf("Aktualny miesiac to marzec.\n");
}

int main() {
    int x = 0;
    bool end = false;
    do {
        menu();
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                zadanie1();
                break;
            case 2:
                zadanie2();
                break;
            case 3:
                end = true;
                break;
        }



    }while(end == false);
    return 0;
}