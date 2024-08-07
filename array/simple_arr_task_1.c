#include <stdio.h>
#define N 3
#define M 3
int main(void)
{
    // Объявление и инициализация двумерного массива matrix.
    // Массив содержит N строк и M столбцов (в данном случае 3x3).
    int matrix[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Внешний цикл for: перебор строк матрицы.
    // Переменная i - счетчик строк, принимает значения от 0 до N-1 (от 0 до 2).
    for (int i = 0; i < N; i++) { 
        // Внутренний цикл for: перебор элементов в каждой строке.
        // Переменная j - счетчик столбцов, принимает значения от 0 до M-1 (от 0 до 2).
        for (int j = 0; j < M; j++) {
            // Вывод элемента matrix[i][j] на экран.
            // matrix[i][j] - обращение к элементу массива, находящемуся в i-ой строке и j-ом столбце.
            printf("%d ", matrix[i][j]);
        }
        // После вывода всех элементов строки осуществляется переход на новую строку.
        printf("\n");
    }
    return 0;
}