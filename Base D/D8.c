
#include <stdio.h>

int printrec(int num_a,int num_b)
{
    if(num_a==num_b)
    {
        printf("%d",num_a);
        return 1;
    }
    if(num_a<num_b)
    {
        printf("%d ",num_a);
        printrec(num_a+1,num_b);
        return 1;
    }
    if(num_a>num_b)
    {
        printf("%d ",num_a);
        printrec(num_a-1,num_b);
        return 1;
    }
    
}

int main(int argc, char **argv)
{
    int num_a,num_b;
    scanf("%d %d",&num_a,&num_b);
    printrec(num_a,num_b);
    return 0;
}