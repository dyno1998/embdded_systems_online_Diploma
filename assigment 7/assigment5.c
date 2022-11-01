
#include<stdio.h>
#define area(x) x*x*3.14
int main( )
{
	float x;
	printf("please enter the radius");
	scanf("%f",&x);
	printf("the area is = %f",area(x));
	return 0;
}