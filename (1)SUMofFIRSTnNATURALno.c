#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
           sum=sum+i;
       }
   printf("sum of first n natural numbers is %d",sum);
   return 0;
}
