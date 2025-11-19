#include <stdio.h>

int func(int input)
{
	static int i = 0;
	if (input==0)
	{
		return 1;
	}
	if (input%2==1)
	{
	     i++;
	}
	func(input/2);
	return i;
	
}


int main(int argc, char *argv[])
{
	int input;
	scanf("%d",&input);
	printf("%d",func(input));

	
}