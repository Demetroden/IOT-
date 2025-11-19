#include <stdio.h>

int func(int max)
{
    static int count = 0;
    int input;
    scanf("%d",&input);
    if (count==0)
    {
        max = input;
        count++;
    }
    if (input==0)
    {
        return max;
    }
    if (input>max)
    { 
        max = input;   
    }
    return func(max);
    
    
}

int main(int argc, char **argv)
{
    int max;
    printf("%d", func(max));
    return 0;
}

