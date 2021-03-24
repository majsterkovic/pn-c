#include <stdio.h>
#include <time.h>

clock_t t;

void start()
{
    t = clock();
}

void koniec()
{
    t = clock() - t;
    printf("%f\n", (float)t/CLOCKS_PER_SEC);
}

int rekurFib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return rekurFib(n-1) + rekurFib(n-2);
    }
}

int iterFib(int n)
{
    int a = 0;
    int b = 1;
    int c = n;
    for(int i = 0; i<n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    start();
    printf("%i\n", iterFib(41));
    koniec();
    
    start();
    printf("%i\n", rekurFib(31));
    koniec();
    
    return 0;
}