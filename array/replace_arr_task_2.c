#include <stdio.h>
#define N 5
int main(void)
{
    // Инициализируем массив matrix с заданными значениями.
    int matrix[N] = {1, 2, 3, 4, 5};
    // Выводим изначальный массив с заданными значениями
    for(int u = 0; u < N; u++){
        printf("%d", matrix[u]);
    }
    // Перенос строки для красоты
    printf("\n");

    // Объявляем переменные для хранения значений первого и последнего элементов массива.
    int first;
    int last;

    // Объявляем переменную j, которая будет использоваться как индекс для доступа к элементам массива с конца.
    int j; 

    // Запускаем цикл, который будет выполняться 5 раз (по количеству элементов в массиве).
    for (int i = 0, j = N - 1; i < N; i++) { 
        // В начале каждой итерации i инициализируется значением 0, а j - значением N-1 (4 в данном случае).
        // Таким образом, i указывает на начало массива, а j - на конец.

        // Сохраняем значение первого элемента массива в переменной first.
        first = matrix[i];
        // Сохраняем значение последнего элемента массива в переменной last.
        last = matrix[j];

        // Присваиваем элементу с индексом i значение последнего элемента (меняем местами первый и последний элементы).
        matrix[i] = last;
        // Присваиваем элементу с индексом j значение первого элемента.
        matrix[j] = first;

        // Выводим значение элемента с индексом i (который теперь содержит значение последнего элемента).
        printf("%d", matrix[i]);
    }

    return 0;
}