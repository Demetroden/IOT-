
#include <stdio.h>

#define SIZE 10

int Input(int input[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    return i;
}

int MinMax(int arr[],int* index_max,int* max,int* index_min,int* min)
{
    *min=arr[0];
    *index_min = 1;
    *max=arr[0];
    *index_max = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (*max < arr[i])
            {
                *max = arr[i];
                *index_max = i+1;
            }    
            
        if (*min > arr[i])
            {
                *min = arr[i];
                *index_min = i+1;
            }
    }
    return 1;
}

void Print(int index_max,int max,int index_min,int min)
{
    printf("%d %d %d %d", index_max,max,index_min,min);
}


int main(int argc, char **argv)
{
    int input[SIZE];
    int index_max,max,index_min,min;
    Input(input, SIZE);
    MinMax(input,&index_max,&max,&index_min,&min);
    Print(index_max,max,index_min,min);
    return 0;
}