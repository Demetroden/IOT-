#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c,d,e, min;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c,&d,&e);
	min = a <= b ? a : b;
	min = min <= c ? min : c;
	min = min <= d ? min : d;
	min = min <= e ? min : e;
	printf("%"PRId16, min);
	return 0;
} 

