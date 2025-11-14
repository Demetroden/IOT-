
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	int input,x=0,x1;
	scanf("%d", &input);
	for (; input > 0; input/=10)
	{
		x1=x;
		x = input%10+x1;
		
	}
	if (x==10)
	{
		printf("YES");	
	}else
	{
		printf("NO");
	}	
	
	return 0;
}

