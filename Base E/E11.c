#include <stdio.h>

#define SIZE 10


int Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return n;
}

int SearchLast(int last_num)
{
    return last_num % 10;
}


void SortLastNum(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        int last_num = SearchLast(arr[i]);
        for (int j = 0; j < i; j++)
        {
            int count_last_num = SearchLast(arr[j]);
            if (count_last_num > last_num) 
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
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
    SortLastNum(arr);
    Print(arr);
    return 0;
}
