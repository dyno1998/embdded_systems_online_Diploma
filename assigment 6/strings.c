#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void revstring(char name[],int n);
int main()
{ int x;
   char name[]="dyno";
   x=strlen(name);
   revstring(name,x);
   
}
void  revstring(char name[],int n)
{
	printf("%c",name[n]);
	if(n>=1)
   revstring(name,n-1);
    
}