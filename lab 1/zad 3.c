#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
   
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Mozna zbudowac trojkat");
    }
    else
    {
        printf("Nie mozna zbudowac trojkata");
    }

    return 0;
}

