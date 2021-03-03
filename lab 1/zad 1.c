#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
   
    double delta = (b * b) - (4 * a * c);
    double suma = -b / a;

    if (delta > 0)
    {
        printf("%lf", suma);
    }

    return 0;
}