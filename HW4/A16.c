#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c);
	a < b && b < c ? printf("YES") : printf("NO");
	return 0;
}

