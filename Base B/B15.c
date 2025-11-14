//Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o=1,i=0;
	
	while(o>0)
	{
		scanf("%d", &o);
		if(o%2==0 && o!=0)
		{
			i++; //четные
		}

	}
	printf("%d", i);
	return 0;
}

