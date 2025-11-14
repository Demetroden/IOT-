#include <math.h>
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,i;
	scanf("%"SCNd16, &a);
	for(i = 1; i <= abs(a); i++  ) {
		printf("%"PRId16 " %"PRId16 " %"PRId16"\n", i,(int16_t)pow(i,2),(int16_t)pow(i,3));
	}
	return 0;
}

