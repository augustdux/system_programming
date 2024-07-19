#include <stdio.h>
int main(void)
{
    int number, byte, result;
    printf("Вв. целое положительное число: \n");
    scanf("%d", &number);

    printf("Вв. число (от 0 до 255) для замены 3-го байта: \n");
    scanf("%x", &byte);

    result = (number & 0xFF00FFFF) | (byte << 16);

    printf("Результат после замены 3-го байта: %d\n", result);

    return 0;
}
