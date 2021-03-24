#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool czyPalindrom(char w[])
{

    int dl = strlen(w);

    for(int i = 0; i < dl; i++)
    {
        if(w[i] != w[dl-1-i])
        {
            return false;
        }
    }
    return true;
}


void polPalindrom(char w[])
{
    int p = strlen(w)%2;

    switch(p)
    {
        case 0:
            for(int i = 0; i< strlen(w)/2; i++)
            {
                printf("%c", w[i]);
            }
            break;
        case 1:
            for(int i = 0; i< strlen(w)/2+1; i++)
            {
                printf("%c", w[i]);
            }
            break;
    }
}

int main()
{
    char wyraz[31] = "";
    scanf("%s", &wyraz);

    if(czyPalindrom(wyraz))
    {
        polPalindrom(wyraz);
    }

    return 0;
}