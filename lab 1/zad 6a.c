#include <stdio.h>
#include <math.h>

int main() {

    int l = 2147483647;
    int x = 0;
    for(int i = 0; i <20; i++)
    {
        scanf("%i", &x);
        if(abs(x)< l)
        {
            l = x;
        }
    }
    printf("%i", l);
    return 0;
}
