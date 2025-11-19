#include <stdio.h>

void func(int k, int input)
{
    if (input <= 0)
        return;
    
    int times = (k <= input) ? k : input;
    
    for (int i = 0; i < times; i++)
    {
        printf("%d ", k);
    }
    func(k + 1, input - times);
}

int main(int argc, char *argv[])
{
    int input;
    scanf("%d", &input);
    func(1, input);
    printf("\n");
    return 0;
}