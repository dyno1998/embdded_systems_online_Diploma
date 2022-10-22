

 #include <stdio.h>

int main()
{
    int i,factroial,j;
    factroial=1;
printf("Enter an integer :");
fflush( stdout );
scanf("%d",&i);
if(i<0)
	printf("factorial of a negative number doesn't exist");
else
for(j=1;j<=i;j++)
{
	factroial=factroial*j;
}
printf("sum = %d",factroial);

}
