
#include <stdio.h>



void skobka()
{
	char input;
	int i,j = 0;
	while((input = getchar()) != '.')
	{
		
		if(input == '(' || input == ')') 
		{
			
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
