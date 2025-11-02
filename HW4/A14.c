#include <math.h>
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c,num,max;
	scanf("%"SCNd16, &num);
	a = num %  10;
	b = num % 100/10;
	c = num % 1000/100;
	max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
	printf("%"PRId16, max);
	return 0;
}

