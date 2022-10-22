#include<stdio.h>
#include<stdlib.h>
int factorial(int z);
int main()
{
	int x;
	printf("ENTER FACTORIAL");
	scanf("%d",&x);
	int fact;
	fact=factorial(x);
	printf("%d",fact);
}
int factorial(int z) {
	
	int factt;
	if(z<=1)
	return z;
 else 
 {
	 factt=z*factorial(z-1);
	 return factt;
 }	 
}