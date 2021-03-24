#include <stdio.h>
#include <string.h>
#include <ctype.h>

void zamienNapis(char napis[])
{
    int l = strlen(napis);
    for(int i = 0; i<l; i++)
    {
        if(islower(napis[i]))
        {
            napis[i] = toupper(napis[i]);
        }
        else
        {
            napis[i] = tolower(napis[i]);
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