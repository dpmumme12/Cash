#include <math.h>
#include <stdio.h>

int main(void)
{
    float k;
    int c = 0;
    int r = 0;
    do
    {
        printf("Change owed: ");
        scanf("%f", &k);
        printf("%f\n", k);
    }
    while (k <= 0);
    int cents = round(k * 100);
    for (c = r; cents >= 25; r++) // quarter count
    {
        cents = cents - 25;
    }
    for (c = r ; cents >= 10; r++) // dime count
    {
        cents = cents - 10;
    }
    for (c = r; cents >= 5; r++) // nickel count
    {
        cents = cents - 5;
    }
    for (c = r; cents >= 1; r++) // penny count
    {
        cents = cents - 1;
    }
    printf("%d\n", r);
    
}