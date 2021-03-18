#include <stdio.h>
#include <math.h>

int main()
{
    float rad = 0;

    scanf("%f", &rad);
    printf("%f", (rad*180.0)/M_PI);

    return 0;
}