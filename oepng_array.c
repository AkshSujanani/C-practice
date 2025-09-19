#include <stdio.h>

int main()
{
    int arr[25], i, pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            pos++;
        else
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of odd elements: %d\n", odd);
    printf("Number of even elements: %d\n", even);
    printf("Number of positive elements: %d\n", pos);
    printf("Number of negative elements: %d", neg);

    return 0;
}