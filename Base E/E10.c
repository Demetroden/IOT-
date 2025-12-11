#include <stdio.h>

#define SIZE 12
#define SHIFT_SIZE 4


int Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return n;
}

void Shift(int arr[])
{
    int temp[SHIFT_SIZE];

    for (int i = 0; i < SHIFT_SIZE; i++)
        temp[i] = arr[SIZE - SHIFT_SIZE + i];

    for (int i = SIZE - 1; i >= SHIFT_SIZE; i--)
        arr[i] = arr[i - SHIFT_SIZE];

    for (int i = 0; i < SHIFT_SIZE; i++)
        arr[i] = temp[i];
}

void Print(int arr[])
{
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[SIZE];
    Input(arr, SIZE);
    Shift(arr);
    Print(arr);
    return 0;
}
