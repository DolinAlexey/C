//  Запишите конструкцию, с помощью которой можно прервать выполнение цикла,
//  если значение переменной a равно 0.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 DOLIN Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    char a;
    do {
        printf("this message will be printed until 0 is entered\n");
        scanf("%c", &a);
    } while (a != '0');
    
    return 0;
}
