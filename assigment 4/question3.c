	#include<stdio.h>
#include<stdlib.h>
int main()
{
	int z[100][100];
	int t[100][100];
	int n,n1;
	int i,j;
	printf("enter the number of rows and columns");
	scanf("%d",&n);
	scanf("%d",&n1);
	 for(i=0;i<n;i++)
 {
	 for(j=0;j<n1;j++)
	 {
		 printf("enter z%d%d",i+1,j+1);
		 scanf("%d",&z[i][j]);
	 }
 }
  printf("the entered matrix");
  for(i=0;i<n;i++)
 {
	 for(j=0;j<n1;j++)
	 {
		 printf("%d \t",z[i][j]);
		 
	 }
	  printf("\n");
 }
 
 for(i=0;i<n;i++)
 {
	 for(j=0;j<n1;j++)
	 {
		 t[j][i]=z[i][j];
	 }
 }
 
 printf("the transpose function \n");
  for(i=0;i<n1;i++)
 {
	 for(j=0;j<n;j++)
	 {
		 printf("%d \t",t[i][j]);
		 
	 }
	  printf("\n");
 }
}