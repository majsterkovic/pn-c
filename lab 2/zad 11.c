#include <stdio.h>
#include <math.h>

int main()
{
    long int maks = 300000;
    int n = -1;
    double z = 1;
    double suma = 0;
    while(n++ != maks)
    {
        //printf("%i\n", n);
        if(n%2 == 0)
        {
            z = 1.0;
        }
        else
        {
            z = -1.0;
        }
        suma = suma + z/((2*n)+1);
    }
    suma = suma * 4;
    printf("Suma: %lf", suma);
    //pi

    return 0;
}