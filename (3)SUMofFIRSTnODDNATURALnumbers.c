#include<stdio.h>
int  main()
{
    int sum=0,i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    printf("Sum of first n natural odd numbers is %d",sum);
    return 0;
}
