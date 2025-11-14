
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o,v=0,i;
	scanf("%d", &o);
	i = 10;
	for(; o>0; )
	{
		v = o%10;
		o = o/10;
		if(v>=i)
		{
			printf("NO");
			return 0;
		}
		i = v;

	}
	printf("YES");
	return 0;
}

