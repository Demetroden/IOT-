
#include <math.h>
#include <stdio.h>

void is_prime(int input)
{
	if (input < 2)
	{
		printf("NO");
		return;
	}
	
	for (int count = 2; count < input; count++)
	{
		if (input%count == 0)
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}

int main(int argc, char **argv)
{
	int input;
	scanf("%d", &input);
	is_prime(input);
	return 0;
}
