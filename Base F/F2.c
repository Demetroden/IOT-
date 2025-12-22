#include <stdio.h>
#include <stdlib.h>



int Input(int **arr)
{
    int tmp;
    int size = 0;
    while (scanf("%d", &tmp) == 1)
    {
        *arr = realloc(*arr, (size + 1) * sizeof(int));
        (*arr)[size++] = tmp;
     
        int c = getchar();
        if (c == '\n') {
            return size;
        }
    }
    return size;
}

void sort_even_odd(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            int tmp = a[i];
            int j = i;
            while (j > 0 && a[j-1] % 2 != 0)
            {
                a[j] = a[j-1];
                j--;
            }
            a[j] = tmp;  
        }
    }
}


void Print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{   
    int* arr = NULL;
    int size = Input(&arr);

    sort_even_odd(size, arr);
    Print(arr,size);
    free(arr);
    return 0;
}
