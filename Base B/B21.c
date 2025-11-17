#include <math.h>
#include <stdio.h>


char lower(inp)
{
    while ((inp = getchar()) != '.')
    {
        if (inp >= 'A' && inp <= 'Z')
        {
            inp = inp + 32;
            putchar(inp);
            
        }
        else
        {
            putchar(inp);
            
        }

    }


}


int main(int argc, char **argv)
{
    char inp;
    lower(inp);
	return 0;
	
}

