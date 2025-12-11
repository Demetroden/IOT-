
#include <stdio.h>

#define SIZE 5

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}

float mid(int arr[])
{
    int sum=0;
    for (int i = 0; i < SIZE; i++)
        sum+=arr[i];
    return (float)sum/SIZE;
}

void Print(float num)
{
    printf("%.3f", num);
}


int main(int argc, char **argv)
{
    int input[SIZE];
    Input(input, SIZE);
    Print(mid(input));
    return 0;
}