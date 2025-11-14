
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o,v=0,i,j,y;
	scanf("%d", &o);
	for(i=0; o>0; i++)
	{
		v = o%10;
		y = o/10;
		for(j=0; y>0; j++)
		{
			if(y%10 == v && i!=j)
			{
				printf("YES");
				return 0;
			}else{
					y/=10;
				 }
		}
		o/=10;		
	}
	printf("NO");
	return 0;
}

