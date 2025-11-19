#include <stdio.h>

int func(int input, int power)
{
    return (power == 0) ? 1 : input * func(input, power - 1);
}

int main(int argc, char **argv)
{
    int input,power;
    scanf("%d %d",&input,&power);
    printf("%d",func(input,power));
    return 0;
}

