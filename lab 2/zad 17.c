#include <stdio.h>
#include <math.h>
#include <string.h>

float naStopien(float rad)
{
    return (rad*180)/M_PI;
}


int main()
{
    for(float i = 0; i <= 2*M_PI; i=i+M_PI_4)
    {
        printf("%f radianow to %f stopni\n", i, naStopien(i));
    }
    return 0;
}