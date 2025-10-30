#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int number, num_1, num_2, num_3, mult;
	scanf("%d", &number);
	num_1 = number%10;
	num_2 = number%100/10;
	num_3 = number%1000/100;
	mult = num_1*num_2*num_3;
	printf("%d",mult);
	return 0;
}

