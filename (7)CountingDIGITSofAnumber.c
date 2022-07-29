#include<stdio.h>
int main()
{
    int count=0,n,i,mod;
    printf("enter a n umber");
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
        if(n==0)
            break;
        mod=n%10;
         count++;
        n=n/10;

    }
    printf("the number is %d digits",count);
    return 0;
}
