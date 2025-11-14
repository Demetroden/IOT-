//Составить программу для вычисления НОД 

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d %d", &a, &b);
	while(a!=0 && b!=0)
	{
		if(a>b)
		{
			a = a%b;
		}else b = b%a;
	}
	printf("%d", a+b);

	
	return 0;
}

