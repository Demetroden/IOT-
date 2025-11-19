#include <stdio.h>

int is_prime(int input,int count)
{
    if (input <= 1)
        return 0;
    if (input%count==0)
    {
        printf("%d ",count);
        is_prime(input/count,count);
        
    }
    else is_prime(input,count+1);
    
    
}

int main(int argc, char **argv)
{
    int input,count = 2;
    scanf("%d",&input);
    is_prime(input,count);
    
    
    return 0;
}

