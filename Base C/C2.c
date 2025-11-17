#include <math.h>
#include <stdio.h>

int power(int x,int y)
{
    int vedro=1;
    for (int i = 1; i <= y; i++)
    {
        vedro *= x;
        
    }
    return vedro;
    
}

int main(int argc, char **argv)
{
    int input_x, input_y;
    scanf("%d %d", &input_x, &input_y);
    printf("%d", power(input_x,input_y));
	return 0;
	
}