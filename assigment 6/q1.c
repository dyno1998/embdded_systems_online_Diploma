// Online C compiler to run C program online
#include <stdio.h>
int numofprimmnumb(int x,int z);

int main() {
    int x;
    int y;
    int count;
    printf("Enter two numbers(intervals)");
    scanf("%d %d",&x,&y);
   count=numofprimmnumb(x,y);
   printf("%d",count);
    return 0;
}
int numofprimmnumb(int x,int z) 
{
    int count=0;
    int i=0;
    for(i=x;i<=z;i++)
    {
       if(i%2!=0)
	   {
		   
		   count++;
	   }
    }
    return count;
    
}