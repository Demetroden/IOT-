
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t a,b,c;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16, &a,&b,&c);
	(a+b>c) && (a+c>b) && (b+c>a) ? printf("YES") : printf("NO");
	return 0;
}

