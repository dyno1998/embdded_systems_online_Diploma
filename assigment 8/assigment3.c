#include<stdio.h>
int main()
{
char str[100];
  printf("please input a string \n");
gets(str); 
   char *ptr=str;
  int count=0;
  while(*ptr!='\0')
  {
	  
	  ++ptr;
	  ++count;
  }
  --ptr;
  while(count>=0)
  {
	   printf("%c",*ptr);
	   --count;
	   --ptr;
  }

return 0;
}