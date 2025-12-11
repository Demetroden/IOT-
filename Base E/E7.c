#include <stdio.h>

#define SIZE 10

int Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return n;
}

void ReversePartsAndPrint(int arr[])
{
    int half = SIZE / 2;

    for (int index = 0; index < SIZE; index++)
    {
        int partner;

        // Реверс левой половины
        if (index < half)
        {
            partner = half - 1 - index;

            if (index < partner)
            {
                int temp = arr[index];
                arr[index] = arr[partner];
                arr[partner] = temp;
            }
        }
        else
        {
            int offset = index - half;
            partner = SIZE - 1 - offset;

            if (index < partner)
            {
                int temp = arr[index];
                arr[index] = arr[partner];
                arr[partner] = temp;
            }
        }

        // Печать — в том же цикле
        printf("%d ", arr[index]);
    }
}

int main()
{
    int arr[SIZE];

    Input(arr, SIZE);
    ReversePartsAndPrint(arr);

    return 0;
}
