#include <stdio.h>

int main()
{
    int i,sum,j;
    sum=0;
printf("Enter an integer :");
fflush( stdout );

scanf("%d",&i);
for(j=0;j<=i;j++)
{
    sum=sum+j;
}
printf("sum = %d",sum);
    return 0;
}
