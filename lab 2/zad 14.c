#include <stdio.h>
#include <string.h>

void zamienNapis(char napis[])
{
    int l = strlen(napis);
    for(int i = 0; i<l; i++)
    {
        if((napis[i] >= 97) && (napis[i] <= 122))
        {
            napis[i] -= 32;
        }
        else if((napis[i] >= 65) && (napis[i] <= 90))
        {
            napis[i] += 32;
        }
    }
}

int main()
{
    char wyraz[31] = "";
    gets(wyraz);
    zamienNapis(wyraz);
    printf("%s", wyraz);


    return 0;
}