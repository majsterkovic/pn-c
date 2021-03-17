#include <stdio.h>

int main() {
    for(int i = 0; i<=255; i++)
    {
        printf("%i: %c\n", i, i);
        if(i > 0 && i % 39 == 0)
        {
            getchar();
        }
    }
    return 0;
}