#include <stdio.h>
#include <string.h>

// Функция для поиска подстроки в строке
// Возвращает указатель на начало подстроки, если найдена
// Иначе записывает NULL в указатель и возвращает его
char* find_substring(char *str, char *substr, char **ptr) {
  *ptr = strstr(str, substr); 

  return *ptr;
}

int main() {
    char str[100], substr[100];
    char *ptr = NULL; // Инициализируем указатель NULL

    // Ввод строки и подстроки
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Введите подстроку: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = 0;

    // Поиск подстроки
    find_substring(str, substr, &ptr);

    // Вывод результата
    if (ptr != NULL) {
        printf("Подстрока найдена по адресу: %p\n", ptr);
    } else {
        printf("Подстрока не найдена.\n");
        printf("Указатель: %p\n", ptr); // Добавлен вывод указателя
    }

    return 0;
}
