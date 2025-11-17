
#include <math.h>
#include <stdio.h>




int is_happy_number(int input)
{
	int s = 0;
	int m = 1;
	for (int i = 1; input > 0; input/=10)
	{
		s+=input%10;
		m*=input%10;
	}
	s==m ? printf("YES") : printf("NO");

}

int main(int argc, char **argv)
{
	int input;
	scanf("%d", &input);
	is_happy_number(input);
	return 0;
}
