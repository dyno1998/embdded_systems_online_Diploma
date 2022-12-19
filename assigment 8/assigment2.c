#include<stdio.h>
int main()
{
char str[]={"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"};
 char *ptr=str;
 printf("the alphabets are \n");
  while(*ptr!='\0')
  {
	  printf("%c",*ptr);
	  ++ptr;
  }
return 0;
}