#include <stdio.h>
int main(void)
{
    unsigned int a;
    int bit;
    printf("Вв. целое положительное или отрицательное число(от 0 до 255): \n");
    scanf("%d", &a);

    for (int i = 7; i >= 0; i--)
    {
        bit = (a >> i) & 1;
        printf("%d", bit);
    }
    return 0;
}