

#include<stdio.h>
struct student_data 
{
	char name[60];
	int roll_number;
	int grade;
};
int main()

{
	int i;
struct student_data x[10];
   
   for(i=0;i<10;i++)
   {
   
   
	printf("please enter the name");
	getchar();
	gets(x[i].name);
	printf("please enter the roll number");
	scanf("%d",&x[i].roll_number);
printf("please enter the grades");
	scanf("%d",&x[i].grade);
	
   }
      for(i=0;i<10;i++)
		  
		  { 

   	printf("The name is %s \n",x[i].name);
         	printf("the roll number is %d \n",x[i].roll_number);
	printf("the grade is %d \n",x[i].grade);
		  }
		  
		  }