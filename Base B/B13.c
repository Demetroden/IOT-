//Посчитать количество четных и нечетных цифр числа

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o,v=0,i,j;
	scanf("%d", &o);
	for(i=0, j=0; o>0; o/=10)
	{
		if(o%10%2!=0)
		{
			i++; //нечетные
		}else j++; //четные

	}
	printf("%d %d", j, i);
	return 0;
}

