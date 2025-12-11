
#include <stdio.h>

#define SIZE 5

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}

int Min(int arr[])
{
    int min=arr[0];
    for (int i = 0; i < SIZE; i++)
        if (min>arr[i])
            min = arr[i];
    return min;
}

void Print(int num)
{
    printf("%d", num);
}


int main(int argc, char **argv)
{
    int input[SIZE];
    Input(input, SIZE);
    Print(Min(input));
    return 0;
}