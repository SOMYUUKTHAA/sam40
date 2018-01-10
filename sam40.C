#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("ENTER THE LIMIT:\n");
    scanf("%d",&n);
    printf("THE FIBONOCCI SERIES:\n%d\t%d\t",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    
}
