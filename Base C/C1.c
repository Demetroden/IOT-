
#include <stdio.h>

int abs(int x)
{
    return x < 0 ? -x : x;
}

int main(int argc, char **argv)
{
    int input;
    scanf("%d", &input);
    printf("%d", abs(input));
	return 0;
	
}