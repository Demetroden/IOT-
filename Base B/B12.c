
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o, min, max=0;
	scanf("%d", &o);
	min=o%10;
	for (; o > 0; )
	{
		if (o%10>max)
		{
			max=o%10;
		}
		if (o%10<min)
		{
			min=o%10;
		}

		o/=10;

	}
	printf("%d %d", min, max);
	
	return 0;
}

