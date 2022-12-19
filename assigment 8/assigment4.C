#include<stdio.h>
int main()
{
 int array[15];
 int n;

 printf("please enter the number of elemnts \n");	
 scanf("%d",&n);
 int i;
 for(i=0;i<n;i++)
 {
	  printf("please enter element %d \n",i+1);
	  scanf("%d",&array[i]);

 }
 int *ptr=&array[n-1];

 printf(" the elements in revrse order are \n");
 i=n;
 while(1)
 {
	 	  printf("the %dth  is %d  \n",i--,*ptr);
		  
		  if(ptr==array)
			  break;
--ptr;
 }
	return 0;
}