#include<stdio.h>
#include<stdlib.h>
int pow (int z,int p);
int main()
{
	int x,z,result;
		printf("ENTER base");
	scanf("%d",&z);

	printf("ENTER power");
	scanf("%d",&x);
	result=pow(z,x); 
		printf("%d",result);

}
int pow (int z,int p) 
{ 
int power;
	if(p==0)
	{
		return 1;
	}
	else {
		
		power=z*pow(z,p-1);
	 return power;
	}
}
