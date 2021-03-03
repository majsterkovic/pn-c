#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
   
    float delta = (b * b) - (4 * a * c);
    float x1 = 0;
    float x2 = 0;
    int r1 = 0;
    int r2 = 0;


    if (delta >= 0)
    {
        x1 = -b + sqrt(delta) / 2*a;
        x2 = -b - sqrt(delta) / 2*a;
        r1 = (int)x1;
        r2 = (int)x2;
        if (r1 == x1 && r2 == x2 && r1 != r2)
        {
            printf("Rownanie ma dwa pierwiastki calkowite: %d i %d", r1, r2);
        }
        else if (r1 == x1)
        {
            printf("Rownanie ma jedem pierwiastek calkowity: %d", r1);
        }
        else if (r2 == x2 && r1 != r2)
        {
            printf("Rownanie ma jedem pierwiastek calkowity: %d", r2);
        }
        else
        {
            printf("Rownanie nie ma pierwiastkow calkowitych");
        }
    }

    return 0;
}

