//  Реализовать программу, отображающую работающие часы.
//  Для получения текущего времени, воспользоваться функцией time.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 Dolin Aleksey. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    while (1)
    {
        time_t timer = time(NULL);
        printf("%s\n", ctime(&timer));
        sleep(1);
    }
  return 0;
}
