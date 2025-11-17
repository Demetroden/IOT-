#include <math.h>
#include <stdio.h>


char upper(inp)
{
    while ((inp = getchar()) != '.')
    {
        if (inp >= 'a' && inp <= 'z')
        {
            inp = inp - 32;
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
    upper(inp);
	return 0;
	
}

