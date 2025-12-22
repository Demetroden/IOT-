#include <stdio.h>
#include <stdlib.h>



int Input(int** arr) //передача по ** происходит т.к мы хотим изменить сам массив
{
    int tmp;
    int size = 0;
    while (scanf("%d", &tmp) == 1)
    {
        *arr = realloc(*arr, (size + 1) * sizeof(int));
        (*arr)[size++] = tmp;
        // (*arr)[size] эквивалентно *(*arr + size)

        int c = getchar();
        if (c == '\n') {
            return size;
        }
    }
    return size;
}



void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
         for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
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

    sort_array(size, arr);
    Print(arr,size);
    free(arr);
    return 0;
}
