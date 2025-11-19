
#include <stdio.h>

int printrec(int input)
{
    static int s = 0;
    if(input==0)
    {
        
        return 1;

    }
    printrec(input/10);
    s = input%10 + s;
    return s;
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d",&input);
    printf("%d",printrec(input));
    
    
    return 0;
}