
#include <stdio.h>

void parity(int input)
{

	int sum=0; 
	for (;input > 0; input/=10)
		sum=input%10+sum;
	if (sum%2==0)
		printf("YES");
	else printf("NO");
	
}

int main() {
    int input;
    scanf("%d", &input);
	parity(input);
    return 0;
}

