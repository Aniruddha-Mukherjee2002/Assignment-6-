#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of squares of first n natural numbers is %d",sum);
    return 0;
}
