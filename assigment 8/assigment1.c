#include<stdio.h>
int main()
{
	int m=29;	
	printf("the address of m is = %x \n",&m);
	printf("the value of m is = %d \n",m);
	int *ab=&m;
		printf("the address poinr ab is holding =%x \n",ab);
        	printf("the conent of pointer ab is = %d \n",*ab);
	*ab=34;
	
printf("the address poinr ab is holding = %x \n",ab);
        	printf("the conent of pointer ab is = %d\n",*ab);
				*ab=7;
				printf("the address poinr ab is holding =%x \n",ab);
        	printf("the conent of pointer ab is = %d ",*ab);

	return 0;
}