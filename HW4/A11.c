#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c,d,e,min,max;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c,&d,&e);
	
	min = a <= b ? a : b;
	min = min <= c ? min : c;
	min = min <= d ? min : d;
	min = min <= e ? min : e;
	
	max = a >= b ? a : b;
	max = max >= c ? max : c;
	max = max >= d ? max : d;
	max = max >= e ? max : e;
	
	printf("%"PRId16, min + max);
	return 0;
} 

