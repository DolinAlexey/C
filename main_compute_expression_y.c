//  Запишите конструкцию, которая реализовывала бы следующий алгоритм:
//  если x не равен 0
//  вычислить выражение y = 1/x
//  вывести значение переменной y на экран в противном случае
//  вывести сообщение о том, что x не может быть равен 0.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 DOLIN Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    float x = 0.0, y = 0.0;
    printf("enter number x\n");
    scanf("%f", &x);
    if (x != 0)
    {
        y = 1/x;
        printf("y = %.2f\n", y);
    }
    else
    {
        printf("x cannot equal 0\n");
    }
    return 0;
}
