#include<stdio.h>
#include<stdlib.h>
int main()
{
int z[100];
	int n,element;
	int count=0;
int i;
	printf("enter the number of data");
	scanf("%d",&n);
	
	 for(i=0;i<n;i++)
	 { 
		printf("enter the element z%d",i+1);
		 scanf("%d",&z[i]);
	 }
	 	printf("enter the element");
	scanf("%d",&element);
	 
	 for(i=0;i<n;i++)
	 {
		printf("%d \n",z[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		 if(element==z[i])
			 
			 {
				 printf("the element is found");
				 printf("the location its found in is %d",i+1);
				 break;
			 }
	 }
	
	
}