#include <stdio.h>

int main() {
    int k;
    int l;

    scanf("%d", &k);
    
    if(k==10)
    {
        scanf("%x", &l);
        printf("%u", l);
    }
    else if(k==16)
    {
        scanf("%u", &l);
        printf("0x%X", l);
    }

    return 0;
}