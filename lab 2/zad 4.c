#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned int a;
    short f = 0;
    // 191, 181411
    scanf("%d", &a);
    while(a != 0)
    {
        if(a == 0xB)
        {
            printf("Znaleziono wzorzec");
            f = 1;
        }
        a = a >> 1;
    }
    if(f == 0)
    {
        printf("Nie znaleziono wzorca");
    }

    return 0;
}