
#include <stdio.h>

int printrec(int input)
{
    if(input<=0)
    {
        return 1;
    }
    printf("%d ",input);
    printrec(input-1);
    
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d",&input);
    printrec(input);
    return 0;
}