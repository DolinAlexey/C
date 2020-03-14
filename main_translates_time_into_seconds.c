//  Написать программу, которая переводит время, заданное в формате ЧЧ:ММ:СС (часы:минуты:секунды) в секунды.
//  Программа должна проверять правильность введенных пользователем данных.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 Dolin Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    int hours, minutes, seconds, seconds_result;
    printf("enter the time specified in the format HH:MM:SS\n");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);
    if (hours > 24)
    {
        printf("incorrect value format in hours\n");
    }
    else if (minutes > 60)
    {
       printf("incorrect format for the value in minutes\n");
    }
    else if (seconds > 60)
    {
       printf("Invalid value format in seconds\n");
    }
    else
    {
        seconds_result = hours * 3600 + minutes * 60 + seconds;
        printf("the set time value %d:%d:%d is %d\n", hours, minutes, seconds, seconds_result);
    }
    return 0;
}
