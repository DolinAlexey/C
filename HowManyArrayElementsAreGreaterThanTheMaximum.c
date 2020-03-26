//  Сколько элементов массива больше по модулю максимального
//
//  Created by DOLIN Aleksey on 26.03.2020.
//  Copyright © 2020 Dolin Alexey. All rights reserved.

#include <stdio.h>
#include <math.h>

void input_array (int *a, int n)
{
    int i;
    for (i=0; i<n; i++)
        scanf("%d", a + i); // &a[i]
}

void output_array (int *a, int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("a[%d] = %d\n", i, *(a + i));
}

int DetermineTheNumberOfItems (int *a, int n)
{
    int NumberOfItems = 0, Maximum = 0, i;
    for (i = 0; i < n; i++)
        if (*(a + i) > Maximum)
            Maximum = *(a + i);

    for (i = 0; i < n; i++)
        if (abs(*(a + i)) > Maximum)
            NumberOfItems++;
    
    return NumberOfItems;
}

int main()
{
    int arr[5];
    input_array (arr, 5);
    output_array (arr, 5);
    printf("%d элементов массива больше по модулю максимального\n", DetermineTheNumberOfItems (arr, 5));
    return 0;
}
