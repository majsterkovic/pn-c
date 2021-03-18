#include <stdio.h>

int main()
{
    int i = 0;
    while(i++ != 500){
        if(i%7 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}