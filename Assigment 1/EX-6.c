/*
 * EX-6.c
 *
 *  Created on: Jul 29, 2021
 *      Author: Dyno
 */
#include <stdio.h>

int main()

{
	int a,b,temp;
	temp=0;
	printf("Enter a number");
    fflush( stdout );
	scanf("%d",&a);
	printf("Enter a number");
    fflush( stdout );
	scanf("%d",&b);
	temp=b;
	b=a;
	a=temp;
	printf("a:%d",a);
	printf("b:%d",b);


}
