#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool czyTrojkat(float a , float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }
return false;
}

float obliczPole(float a , float b, float c)
{
    float p = (a+b+c)/2;
    float P = sqrt(p*(p-a)*(p-b)*(p-c));
    return P;
}


int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if(czyTrojkat(a, b, c))
    {
        printf("Mozna zbudowac trojkat.\n");
        printf("Pole wynosi %f", obliczPole(a,b,c));
    }

    return 0;
}