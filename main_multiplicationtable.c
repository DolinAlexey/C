//  Написать программу, которая бы проверяла знание таблицы умножения.
//  Программа должна вывести на экран два случайных числа в диапазоне от 2 до 9 и спросить пользователя, какой будет результат от перемножения этих чисел.
//  Затем проверить ответ и выдать оценку: 5 - если ответ верный или 2 - если ответ неверный.
//
//  Created by DOLIN Aleksey on 13.03.2020.
//  Copyright © 2020 DOLIN Aleksey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int) time(NULL));
    int firstnumber = 2 + rand()%7; //  два случайных числа в диапазоне от 2 до 9
    int secondnumber = 2 + rand()%7;    //  два случайных числа в диапазоне от 2 до 9
    int result = firstnumber * secondnumber;    //  результат от перемножения этих чисел.
    int userresult = 0;
    printf("enter the result of multiplying two numbers: %d and %d\n", firstnumber, secondnumber);
    scanf("%d", &userresult);
    if (userresult == result)
    {
        printf("5\n");
    }
    else
        printf("2\n");
    return 0;
}
