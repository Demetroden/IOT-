#include <stdio.h>

int func(int m,int n)
{
    return (m==0) ? n+1 : (m>0&&n==0) ?  func(m-1, 1) : func(m-1, 1) ? func(m-1,func(m,n-1)) : 0;
    
}

int main(int argc, char **argv)
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d", func(m,n));
    return 0;
}

