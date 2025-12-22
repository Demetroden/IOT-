

#include <stdio.h>
#include <stdlib.h>

int Input(int** arr)
{
    int tmp;
    int size = 0;

    while (scanf("%d", &tmp) == 1)
    {
        *arr = realloc(*arr, (size + 1) * sizeof(int));
        (*arr)[size++] = tmp;

        int c = getchar();
        if (c == '\n')
            break;
    }
    return size;
}

void compression(int* a, int N, int** b, int* M)
{
    *b = NULL;
    *M = 0;

    int i = 0;

    if (a[0] == 1)
    {
        *b = realloc(*b, (*M + 1) * sizeof(int));
        (*b)[(*M)++] = 0;
    }

    while (i < N)
    {
        int count = 1;

        while (i + count < N && a[i] == a[i + count])
            count++;

        *b = realloc(*b, (*M + 1) * sizeof(int));
        (*b)[(*M)++] = count;

        i += count;
    }
}

// int compression(int a[], int b[], int N)
// {

//     int i = 0;
//     int j = 0;
//     if (a[0] == 1)
//     {
//         b[j++] = 0;
//     }

//     while (i < N)
//     {
//         int count = 1;

//         while (i + count < N && a[i] == a[i + count])
//             count++;

//         b[j++] = count;
//         i += count;
//     }
//     return j;
// }

int main()
{
    int* a = NULL;
    int* b = NULL;

    int size_a = Input(&a);
    int size_b = 0;

    compression(a, size_a, &b, &size_b);
    // compression(a,b,size_a);

    for (int i = 0; i < size_b; i++)
        printf("%d ", b[i]);

    printf("\n");

    free(a);
    free(b);
    return 0;
}
