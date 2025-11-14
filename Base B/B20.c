
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	int input;
	scanf("%d", &input);
	if (input < 2)
	{
		printf("NO");
		return 0;
	}
	
	for (int count = 2; count < input; count++)
	{
		if (input%count == 0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
	
}

