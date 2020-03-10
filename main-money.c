#include <stdio.h>

int main()
{
    float fractionalnumber = 0.0; //дробное число
    int rubles = 0, kopek = 0;
    printf("enter fractional number\n");
    scanf("%f", &fractionalnumber);
    rubles = fractionalnumber;
    kopek = (fractionalnumber-rubles)*100;
    printf("%d rubles, %d kopek\n", rubles, kopek);
    return 0;
}
