
#include <stdio.h>

#define SIZE 12

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}


float Avg(int input[])
{
    int sum = 0;
    for(int i=0;i<SIZE;i++)
        sum += input[i];
    return (float)sum/SIZE;
}

void Print(float sum)
{
    printf("%.2f", sum);
}

int main(int argc, char **argv)
{
    int input[SIZE];
    Input(input, SIZE);
    Print(Avg(input));
    return 0;
}