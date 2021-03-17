#include <stdio.h>

int main()
{
    float liczba = 2.558877;
    scanf("%f", &liczba);

    printf("%f\n", liczba);
    printf("%e\n", liczba);
    printf("%A\n", liczba);
    printf("%.3f\n", liczba);
    printf("%.3e\n", liczba);

    return 0;
}