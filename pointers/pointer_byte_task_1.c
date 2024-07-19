#include <stdio.h>

int main() {
  int num, new_byte;

  // Ввод числа и нового значения байта
  printf("Введите целое положительное число: ");
  scanf("%d", &num);
  printf("Введите новое значение третьего байта (0-255): ");
  scanf("%d", &new_byte);

  // Изменение третьего байта через указатель
  unsigned char *ptr = (unsigned char *)&num; 
  ptr += 2; // Сдвигаем указатель на третий байт
  *ptr = (unsigned char)new_byte;

  // Вывод результата
  printf("Число с измененным байтом: %d\n", num);

  return 0;
}

