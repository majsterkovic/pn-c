#include <stdio.h>

int silnia(int n)
{
    return (n==0) ? 1 : n*silnia(n-1);
}

int pascal(int n, int r)
{
    return silnia(n)/(silnia(r)*silnia(n-r));
}

int main()
{
    int p;
    scanf("%i", &p);
    int N = p;
    for(int n = 0; n <= N; n++)
    {
        if(n<5)
        {
            printf(" ");
        }
        for(int j = 0; j <= (N-n)-1; j++)
        {
            printf(" ");
        }

        for(int r = 0; r <= n; r++)
        {
            printf("%i ", pascal(n, r));
        }

    printf("\n");
    }

    return 0;
}