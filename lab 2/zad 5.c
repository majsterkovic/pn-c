#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned int stan, maska;
    scanf("%x", &stan);
    scanf("%x", &maska);

    printf("0x%x", ~(~stan | maska));

    return 0;
}