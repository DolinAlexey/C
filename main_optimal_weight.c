//  Написать программу, которая вычисляет оптимальный вес для пользователя,
//  сравнивая его с реальным, и выдает рекомендацию о необходимости поправиться
//  или похудеть и насколько килограмм.
//  Оптимальный вес вычисляется по формуле:
//  Рост (см) – 100.
//
//  Created by DOLIN Aleksey on 14.03.2020.
//  Copyright © 2020 Dolin Aleksey. All rights reserved.
//

#include <stdio.h>

int main()
{
    int optimal_weight = 0, weight = 0, height = 0;
    printf("enter your weight: \n");
    scanf("%d", &weight);
    printf("enter your height: \n");
    scanf("%d", &height);
    optimal_weight = height - 100;
    if (weight > optimal_weight) {
        printf("recommendation on the need to lose weight by %d kilograms\n", (weight - optimal_weight));
    } else {
        printf("recommendation on the need to gain weight by %d kilograms\n", (optimal_weight - weight));
    }
    return 0;
}
