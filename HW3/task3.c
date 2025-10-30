
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
	float avg;
	scanf("%d %d %d", &x,&y,&z);
	avg = ((float)x+(float)y+(float)z)/3.;
	printf("%.2f",avg);
	return 0;
}

