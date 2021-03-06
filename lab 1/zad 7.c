#include <stdio.h>
#include <string.h>

int main() {
    char n[30];
    scanf("%s", &n);
    int l = strlen(n);
    for(int i = 0; i < l; i++)
    {
        if((int)n[i] % 2 == 0)
        {
            printf("%c\n", n[i]);
        }
    }
    return 0;
}
