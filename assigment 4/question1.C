#include<stdio.h>
#include<stdlib.h>
int main()
{
 float x[2][2];
 float y[2][2];
 float z[2][2];
 int i,j;
 for(i=0;i<2;i++)
 {
	 for(j=0;j<2;j++)
	 {
		 printf("enter x%d%d",i+1,j+1);
		 scanf("%f",&x[i][j]);
	 }
 }

for(i=0;i<2;i++)
 {
	 for(j=0;j<2;j++)
	 {
		 printf("enter y%d%d",i+1,j+1);
		 scanf("%f",&y[i][j]);
	 }
 }
 for(i=0;i<2;i++)
 {
	 for(j=0;j<2;j++)
	 {
		 z[i][j]=x[i][j]+y[i][j];
	 }
 }
 printf("sum of matrix is \n ");
 for(i=0;i<2;i++)
 {
	 for(j=0;j<2;j++)
	 {
		printf("%f\t",z[i][j]);
		if(j==1)
		{
			printf("\n");
		}
	 }
 }
 return 0;
}