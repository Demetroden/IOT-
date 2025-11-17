#include <math.h>
#include <stdio.h>


int conversion(int input, int numsys)
{
    int result = 0;
    int multiplier = 1;
    
    while (input > 0)
    {
        result = result + (input % numsys) * multiplier;
        multiplier *= 10;
        input /= numsys;
    }
    
    return result;
}


int main(int argc, char **argv)
{
    int input,numsys;
    scanf("%d %d", &input, &numsys);
    printf("%d", conversion(input,numsys));
	return 0;
	
}

