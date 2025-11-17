#include <math.h>
#include <stdio.h>

int factorial(int input)
{
    int result = 1;
    for (int i = 1; i <= input; i++)
    {
        result = result * i;
    }
    printf("%d", result);
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    factorial(input);
	
}

