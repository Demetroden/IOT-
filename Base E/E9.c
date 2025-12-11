#include <stdio.h>

#define SIZE 10

int Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return n;
}

void Swap(int arr[])
{
    int tmp = arr[0];
    for (int i = SIZE-1; i > 0; i--)
    {
        if(i == SIZE-1)
        {
            arr[0] = arr[SIZE-1];
        }
        arr[i] = arr[i-1];  
                
    }
    arr[1] = tmp;

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
    Swap(arr);
    Print(arr);
    return 0;
}
