
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o,v=0,i;
	scanf("%d", &o);
	for(i=0; o>0; i++)
	{
		if(v == o%10)
		{
			printf("YES");
			return 0;
			}
		v = o%10;
		o/=10;		
	}
	printf("NO");
	return 0;
}
