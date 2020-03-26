//  1. Написать функцию, которая определяет номер строки квадратной матрицы
//  (двухмерного массива), среднее арифметическое элементов которой максимально.
//  Размер двумерного массива задать в программе(любые значения).
//
//  Created by DOLIN Aleksey on 24.03.2020.
//  Copyright © 2020 Dolin Alexey. All rights reserved.
//

#include <stdio.h>
#define N 3
#define M 3

void input_array (int array[N][M])
{
    int i, j;
     for(i = 0; i < N; i++)
         for(j = 0; j < M; j++)
             scanf("%d", &array[i][j]);
}
void output_array (int array[N][M])
{
    int i, j;
    for(i = 0; i < N; i++)
     {
         for(j = 0; j < M; j++)
             printf("array[%d][%d] = %d ", i, j, array[i][j]);
         printf("\n");
    }
}

int determine_line_number (int array[N][M])
{
    int i, j, line_number = 0 , average = 0, max_average = 0, summ = 0;
    for (i = 0; i < N; i ++)
    {
        for (j = 0; j < M; j++)
        summ = summ + array[i][j];
        average = summ/j;
        if (average >= max_average)
            {
                max_average = average;
                line_number = (i+1);
            }
        summ = 0;
        average = 0;
    }
    return line_number;
}

int main()
{
    int array[N][M];
    input_array(array);
    output_array(array);
    printf("номер строки, среднее арифметическое элементов которой максимально %d\n", determine_line_number (array));
    return 0;
}
