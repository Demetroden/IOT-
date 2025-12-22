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




int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                printf("YES");
                return 1;
            }
        }
        
    }
    printf("NO");
    return 0;
}



int main()
{   
    int* a = NULL;
    int size = Input(&a);
    is_two_same(size,a);
    free(a);
    return 0;
}
