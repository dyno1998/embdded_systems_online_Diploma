#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char name[100];
	char x;
	int i;
	int count=0;

	printf("please enter a string");
	gets(name);
	printf("%s",name);
		printf("please enter a char to scanf for");
	scanf("%c",&x);

	for(i=0;name[i]!='\0';++i)
	{
		if(x==name[i])
		{
			++count;
		}
	}
			printf("frequence of %c is %d",x,count);

}		
