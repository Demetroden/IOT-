
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	a = (float)a/100;
	if(a<1 || a>=10)
	{
		printf("NO");
	}else printf("YES");
		
	return 0;
}

