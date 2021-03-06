#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    double wynik;

    scanf("%f", &x);
   
    wynik = (sin(x) * sin(x) * log(15)) / sqrt(fabs(log(x / 2) / log(3)));
    printf("%lf", wynik);

    return 0;
}