//  Написать программу, которая выводит таблицу степеней двойки
//  от нулевой до десятой не используя функцию pow.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 Dolin Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    int number = 1;
    for (int i = 0; i < 10; ++i)
    {
            //number = number*2;
            printf("i = %d and number = %d\n", i, (number<<i));
    }
    return 0;
}
