#include <math.h>
#include <stdio.h>

void print_simple(int input)
{
    for (int i = 2; i <= input; i++)
    {
        while (input % i == 0)
        {
            input/=i;
            printf("%d ", i);
        }
    }
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    print_simple(input);

    return 0;
	
}

