#include <stdio.h>

int func(int input)
{
    
    if (input == 1)
    {
        printf("YES");
        return 0;
    }
    if (input%2!=0 || input==0)
    {
        printf("NO");
        return 0;
    }
    func(input/2);
    return 0;
    
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d",&input);
    func(input);
    return 0;
}

