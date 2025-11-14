
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int input,fib0=1,fib1=0,v=0;
	scanf("%d", &input);


	for(int i=1; i<=input; i++)
	{
		fib1 = fib0 + v;
		fib0 = v;
		v = fib1;
		printf("%d ", fib1);
	}
	

	return 0;
}

