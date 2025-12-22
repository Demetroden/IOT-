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




int find_max_array(int size, int* a)
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    // printf("%d\n",max);
    return max;
}



int main()
{   
    int* a = NULL;
    int size = Input(&a);
    find_max_array(size,a);
    free(a);
    return 0;
}
