
#include <stdio.h>

int sum(int input)
{
    static int s = 0;
    if(input>1)
        sum(input-1);
        s+=input;
    return s;
    
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    printf("%d",sum(input));
    return 0;
}