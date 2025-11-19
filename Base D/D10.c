
#include <stdio.h>

int is_prime(int input,int count)
{
    
    if (input < 2 || ((input%count == 0)&&(count != input)))
	{
		printf("NO");
		return 0;
	}
    if(count == input)
    {
        printf("YES");
         return 0;
    }
    is_prime(input,count+1);
    
    
}

int main(int argc, char **argv)
{
    int input,count = 2;
    scanf("%d",&input);
    is_prime(input,count);
    
    
    return 0;
}