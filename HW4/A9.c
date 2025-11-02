#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c,d,e, max;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c,&d,&e);
	max = a >= b ? a : b;
	max = max >= c ? max : c;
	max = max >= d ? max : d;
	max = max >= e ? max : e;
	printf("%"PRId16, max);
	return 0;
} 

