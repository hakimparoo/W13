#include<stdio.h>
int bynaru(int dec)
{
    return dec % 2;
}
int main()
{
    int dec;
    int bin[100];
    int i = 0, j;

    printf_s(" Input Decimal value : ");

    scanf_s("%d", &dec);

    do
    {
        bin[100] = bynaru(dec);
        dec /= 2;
        i++;
    } while (dec > 0);


    printf("\n Binary value is ");

    for (j = i - 1; j >= 0; j--)
    {
        printf_s("%d", bin[i]);
    }
    

    return 0;
}