
#include <stdio.h>

void printrec()
{
    char input;
    input = getchar();
    if (input=='.')
        return;
    printrec(input);
    putchar(input);
    return;
}

int main(int argc, char **argv)
{
    printrec();
    return 0;
}