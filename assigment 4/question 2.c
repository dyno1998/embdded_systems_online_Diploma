#include<stdio.h>
#include<stdlib.h>
int main()
{
int z[100];
	int n;
	int sum=0;
	float average;
	int i,j;
	printf("enter the number of data");
	scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		 printf("enter z%d",i+1);
		 scanf("%d",&z[i]);
		 
	 }
 
 for(i=0;i<n;i++)
 {
	
		sum=sum+z[i];
		 
	 
 }
 
 average=sum/n;
 printf("sum is %f",average);
 
}