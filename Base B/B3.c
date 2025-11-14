
#include <stdio.h>
#include <inttypes.h>
#include <math.h>


int main(int argc, char **argv)
{
	long int a,b,res;
	scanf("%ld %ld", &a,&b);
	
	if(abs(a)<=100 && abs(b)<=100){
		for(res=0;a<=b;a++){
			res += pow(a,2);
		}
		printf("%ld",(long int)res );
	}

	
	return 0;
}

