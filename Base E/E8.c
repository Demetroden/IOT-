#include <stdio.h>

#define SIZE 12

int Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return n;
}

void ReverseThreeParts(int arr[])
{
    int partSize = SIZE / 3;

    for (int start = 0; start < SIZE; start += partSize)
    {
        int left  = start;
        int right = start + partSize - 1;

        while (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
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
    ReverseThreeParts(arr);
    Print(arr);

    return 0;
}
