#include <math.h>
#include <stdio.h>

int sum(int input)
{
    int s=0;
    for (int i = 1; i <= input; i++)
    { 
        s+=i;
    }
    return s;
    
}


int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    printf("%d", sum(input));
	return 0;
	
}

