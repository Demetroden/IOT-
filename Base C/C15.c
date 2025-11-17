
#include <math.h>
#include <stdio.h>

int grow_up(int input)
{
	int v=0,i;
	i = 10;
	for(; input>0; )
	{
		v = input%10;
		input = input/10;
		if(v>=i)
		{
			printf("NO");
			return 0;
		}
		i = v;

	}
	printf("YES");
}

int main(int argc, char **argv)
{
	int input;
	scanf("%d", &input);
	grow_up(input);
	return 0;
}
