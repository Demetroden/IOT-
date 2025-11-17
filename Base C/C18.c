
#include <math.h>
#include <stdio.h>



void is_digit()
{
	char input;
 	int sum=0;
	while((input = getchar()) != '.')
	{
		if(input >= '0' && input <= '9') 
		{
			sum++;

		}

	}
	printf("%d", sum);
}



int main(int argc, char **argv)
{
	is_digit();
	return 0;
}
