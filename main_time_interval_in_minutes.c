//  Написать программу пересчета величины временного интервала,
//  заданного в минутах, в величину, выраженную в часах и минутах.
//
//  Created by DOLIN Aleksey on 13.03.2020.
//  Copyright © 2020 DOLIN Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    int hours = 0, minutes = 0, EnteredMinutes = 0;
    printf("enter the value of the time interval in minutes\n");
    scanf("%d", &EnteredMinutes);
    hours = EnteredMinutes / 60;
    minutes = EnteredMinutes - hours*60;
    printf("interval in hours and minutes is %d hours and %d minutes\n", hours, minutes);
    return 0;
}
