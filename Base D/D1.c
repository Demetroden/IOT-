
#include <stdio.h>

void printrec(int input)
{
    if(input>1)
        printrec(input-1);
    printf("%d ", input);
    
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    printrec(input);
    return 0;
}