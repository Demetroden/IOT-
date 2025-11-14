
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o,v=0,i,j=0;
	scanf("%d", &o);
	for(i=0; o>0; i++)
	{
		v = o%10;
		o = o/10;
		if(v==9)
		{
			j++;
			if(j>1)
			{
				printf("NO");
				return 0;
				}
			}
		}
		if(j==1)
		{
			printf("YES");
			return 0;
			}else printf("NO");
		
	return 0;
}

