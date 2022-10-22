#include<stdio.h>
#include<stdlib.h>
int main()
{
int z[100];
	int n,pos,element;
int i;
	printf("enter the number of data");
	scanf("%d",&n);
	
	 for(i=0;i<n;i++)
	 { 
		printf("enter the element z%d",i+1);
		 scanf("%d",&z[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		printf("%d \n",z[i]);
	 }
	
	printf("enter the pos");
	scanf("%d",&pos);
	printf("enter the pos");
	scanf("%d",&element);
	for(i=n;i>=pos;i--)
	{
		z[i]=z[i-1];
	}
	z[pos-1]=element;
	
	for(i=0;i<=n;i++)
	 {
		printf("%d \n",z[i]);
	 }
}