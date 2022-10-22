#include<stdio.h>
#include<stdlib.h>
int main ()
{
char name[100];
	char x;
	int i=0;
	int count=0;

	printf("please enter a string");
	gets(name);
	printf("%s\n",name);
		
  while(name[i]!=0)
  {
	  ++count;
	  ++i;
  }
  

 while(count>=0)
 {
	 	printf("%c",name[count]);
          count--;
		  
 }
}