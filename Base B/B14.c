//Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int o=1,count=0;
	while(o!=0) 
	{
		scanf("%d", &o);
		count++;
	}
	printf("%d", count-1);
	

	return 0;
}

