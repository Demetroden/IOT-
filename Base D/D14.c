#include <stdio.h>

void func()
{
    int input;
    scanf("%d",&input);
    if (input==0)
    {
        return;
    }
    if (input%2!=0)
    { 
        printf("%d ",input);   
    }
    func();
    
}

int main(int argc, char **argv)
{
    func();
    return 0;
}

