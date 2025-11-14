
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o,v=0,i;
	scanf("%d", &o);
	for(i=0; o>0; )
	{
		v = o%10;
		o = o/10;

		if(v%2!=0)
		{
			printf("NO");
			return 0;
		}
		

	}
	printf("YES");
	return 0;
}

