#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c, max;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c);
	max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
	printf("%"PRId16, max);
	return 0;
}

