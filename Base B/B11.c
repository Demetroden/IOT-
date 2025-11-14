
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o,v,i,j,k;
	scanf("%d", &o);

	if(o==0){
		printf("%d", o);
		return 0;
	}
	for(i=0; o>0; i++ )
	{
		printf("%d", o%10);
		o = o/10;

	}
	return 0;
}

