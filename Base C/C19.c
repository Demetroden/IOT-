
#include <math.h>
#include <stdio.h>



void digit_to_num()
{
	char input;
 	int sum=0;
	while((input = getchar()) != '.')
	{
		if(input >= '0' && input <= '9') 
		{
			sum+= input-'0';

		}

	}
	printf("%d", sum);
}



int main(int argc, char **argv)
{
	digit_to_num();
	return 0;
}
