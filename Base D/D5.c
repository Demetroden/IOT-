
#include <stdio.h>

void printrec(int input,int is_first)
{
    if (input == 0)
    {
        if (is_first)
            printf("0");
        return;
    }
    printrec(input/2,0);
    printf("%d", input%2);
}

int main(int argc, char **argv)
{
    int input,is_first=1;
    scanf("%d", &input);
    printrec(input,1);
    return 0;
}