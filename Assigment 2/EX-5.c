#include <stdio.h>

int main()
{
    char charr;
   printf("Enter a character : ");
   fflush( stdout );

   scanf("%c",&charr);
   if(charr<=90&&charr>=65 || charr<=122&&charr>=97)
{
    printf("%c is an alphapet",charr);

}

else
{
    printf("%c is not an alphapet",charr);
}
}
