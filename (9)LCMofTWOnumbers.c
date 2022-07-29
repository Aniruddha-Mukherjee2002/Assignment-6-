#include<stdio.h>
int main()
{
    int i,n1,n2,res=0;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1*n2;i++)
        if(i%n1==0&&i%n2==0)
        break;
    printf("%d",i);
    return 0;
}
