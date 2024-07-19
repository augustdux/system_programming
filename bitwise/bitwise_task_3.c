#include <stdio.h>
int main(void)
{
    unsigned int a;
    int bit, count;
    printf("Вв. целое положительное число(от 0 до 255): \n");
    scanf("%d", &a);

    for (int i = 7; i >= 0; i--)
    {
        bit = (a >> i) & 1;
        if (bit == 1)
        {
            count++;
        }
        printf("%d", bit);
    }
    printf("\nКол-во единиц в числе %d: %d", a, count);
    return 0;
}