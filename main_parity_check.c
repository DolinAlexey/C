//  Написать программу, которая проверяет,
//  является ли введенное пользователем целое число четным.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 Dolin Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    int user_entered_number = 0;
    int result = 0;
    printf("enter your number\n");
    scanf("%d", &user_entered_number);
    result = user_entered_number % 2;
    if (result == 0) {
        printf("%d even number\n", user_entered_number);
    } else {
        printf("%d odd number\n", user_entered_number);
    }
    return 0;
}
