#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int16_t x1,y1,x2,y2;
	float k,b = 0.;
	scanf("%"SCNd16 " %"SCNd16 " %"SCNd16 " %"SCNd16, &x1,&y1,&x2,&y2);
	k = (float)(y2-y1)/(x2-x1);
	b = y1 - k*x1;
	printf("%.2f" " %.2f", k,b);
	return 0;
}

