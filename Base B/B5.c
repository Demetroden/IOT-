

#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o,v,i=10,z=0;
	scanf("%d", &o);
	while(o>0)
	{
			v = o%i;
			o/=10;
			z = v+z;
	}
	printf("%d",z);
	return 0;
}

