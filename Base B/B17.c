
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,v,c,sum=0,mult=1;
	scanf("%d", &a);

	for(int i = 10; i <= a; i++)
	{
		sum = 0;
		mult = 1;

		for (int k = i; k > 0; k/=10)
		{
			v = k % 10;
			sum = v+sum;

		}
	
		for (int j = i; j > 0; j/=10)
		{
			c = j % 10;
			mult = c*mult;

		}

		if (sum == mult)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}

