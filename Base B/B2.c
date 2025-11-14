
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(int argc, char **argv)
{
	int16_t a,b;
	scanf("%"SCNd16 " %"SCNd16, &a,&b);
	a = abs(a);
	for(;a<=abs(b);a++){
		printf("%"PRId16" ", (int16_t)pow(a,2) );
	}
	return 0;
}

