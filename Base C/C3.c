#include <math.h>
#include <stdio.h>

int mid(int x,int y)
{
    int mid_value = (x + y) / 2;
    return mid_value;
    
}

int main(int argc, char **argv)
{
    int input_x, input_y;
    scanf("%d %d", &input_x, &input_y);
    printf("%d", mid(input_x,input_y));
	return 0;
	
}