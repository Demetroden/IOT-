#include <math.h>
#include <stdio.h>

int function(int input)
{
    while (input != 0)
    {
        if (-2<=input && input<2)
            return input*input;
        if (input>=2)
            return input*input+4*input+5;
        if (input<-2)
            return 4;

    }
    
}


int main(int argc, char **argv)
{
   int max,input = 1;
   for (int i = 1; input != 0; i++)
   {
        scanf("%d", &input);
        if (i==1)
            max=function(input);
        else if (function(input) > max)
            max = function(input);
   }
    printf("%d", max);
	return 0;
	
}

