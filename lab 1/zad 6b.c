#include <stdio.h>

int main() {
    int l = -2147483647;
    int x;

    while(scanf("%i", &x) != 0)
    {
        if(x > l)
        {
            l = x;
        }
    }
    printf("%i", l);
    return 0;
}
