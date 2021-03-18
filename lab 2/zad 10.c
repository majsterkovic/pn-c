#include <stdio.h>

int main()
{
    double s1 = 0;
    double s2 = 0;
    double x = 0;

    for(long long int i = 1; i<=10000; i++){
        x = 1.0/(i*i);
        s1 = s1 + x;
    }
    for(int i = 10000; i>0; i--){
        x = 1.0/(i*i);
        s2 = s2 + x;
    }

    printf("%lf %lf\n", s1, s2);
    if(s1 == s2)
    {
        printf("Sa takie same");
    }
    else
    {
        printf("Sa inne");
    }

    return 0;
}