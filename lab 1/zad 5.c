#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int calk = 0;
    int wym = 0;
    scanf("%i%i%i", &a, &b, &c);

    for(int i = 1; i <= abs(c); i++)
    {
        if(c%i == 0)
        {
            if(a*i*i+b*i+c == 0)
            {
                calk++;
            }
            if(a*(-i)*(-i)+b*(-i)+c == 0)
            {
                calk++;
            }
        }
    }
    printf("Rownanie ma %d rozwiazan calkowitych\n", calk);

    for(int i = -abs(c); i <= abs(c); i++)
    {
        if(i != 0 && c%i == 0)
        {
            for(int j = 1; j <=abs(a); j++)
            {
                if(a%j == 0)
                {
                    float z = (float)i/(float)j;
                    printf("%f\n", z);
                    if( z*z*a+z*b+c == 0 )
                    {
                        wym++;
                    }
                }
            }
        }
    }
    printf("Rownanie ma %d rozwiazan wymiernych", wym);


    return 0;
}