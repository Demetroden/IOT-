#include <math.h>
#include <stdio.h>

unsigned long long int mult(int input)
{
    unsigned long long int s=1;
    for (int i = 2; i <= input; i++)
    { 
        s*=2;
    }
    return s;
    
}


int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    printf("%llu", mult(input));
	return 0;
	
}

