#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
   for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("The number %d is prime",n);
    else
        printf("The number %d is not prime",n);

}
