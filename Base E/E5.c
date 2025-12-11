
#include <stdio.h>

#define SIZE 10

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}


int Sum(int input[])
{
    int sum = 0;
    for(int i=0;i<SIZE;i++)
        if (input[i]>0)
            sum += input[i];
    return sum;
}

void Print(int sum)
{
    printf("%d", sum);
}

int main(int argc, char **argv)
{
    int input[SIZE];
    Input(input, SIZE);
    Print(Sum(input));
    return 0;
}