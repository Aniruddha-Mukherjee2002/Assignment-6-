#include<stdio.h>
int main()
{
    int mod,i,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
       if(n==0)
            break;
       mod=n%10;
       printf("%d",mod);
       n=n/10;
    }
}
