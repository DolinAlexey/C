//  Записать конструкцию, с помощью которой программа выдавала
//  бы на экран один символ, код которого содержится в переменной ch,
//  если значение этой переменной не равно символу новой строки.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 DOLIN Aleksey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 0;
    while(1)
    {
        printf("enter character code\n");   //  ввод кода символа
        scanf("%d", &ch);
        if((char)ch =='\n') break; //   если значение переменной равно коду новой строки 10, то выход
        printf("Your code %d is simbol %c\n", ch, (char)ch);
    }
    printf("a new line feed code was received\n");
    return 0;
}
