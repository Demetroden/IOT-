#include <stdio.h>
void skobka()
{
	char input;
	int i=0,j = 0;
	while((input = getchar()) != '.')
	{
		
		if(input == '(' || input == ')') 
		{
			if(i==0 && j > 0 )
				break;
			input == '(' ? i++ : j++;
			
		}
		
	}
	i==j ? printf("YES"):printf("NO");
}
int main(int argc, char **argv)
{

	skobka();
	return 0;
}
