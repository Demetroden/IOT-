
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b;
	scanf("%"SCNd16 " %"SCNd16, &a,&b);
	a > b ? printf("Above") : a < b ? printf("Less") : a == b ? printf("Equal") : printf("false");
	return 0;
}

