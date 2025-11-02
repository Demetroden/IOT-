
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t inp;
	scanf("%"SCNd16, &inp);
	(inp == 12 || (1 <= inp && inp <= 2)) ? printf("winter") : 3 <= inp && inp <= 5 ? \
	printf("spring") : 6 <= inp && inp <= 8 ? printf("summer") :  9 <= inp && inp <= 11 ? \
	printf("autumn") : printf("false");
	return 0;
}

