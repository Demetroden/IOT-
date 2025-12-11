
#include <stdio.h>

#define SIZE 10

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}

void Max(int arr[],int* index_max,int* max,int* max_2)
{
    int min = arr[0];
    int index_min;
    *max=arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
            *index_max = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            index_min = i;
        }    
            
    }
    arr[*index_max]=arr[index_min];
    *max_2=arr[index_min];
    for (int i = 0; i < SIZE; i++)
    {
        if (*max_2 < arr[i])
        {
            *max_2 = arr[i];
        }    
            
    }
}

int Sum(int max,int max_2)
{
    return max + max_2;
}

void Print(int sum)
{
    printf("%d", sum);
}

int main(int argc, char **argv)
{
    int input[SIZE];
    int index_max,max,max_2;
    Input(input, SIZE);
    Max(input,&index_max,&max,&max_2);
    Print(Sum(max,max_2));
    return 0;
}