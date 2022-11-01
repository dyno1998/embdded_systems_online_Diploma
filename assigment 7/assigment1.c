#include<stdio.h>
struct student_data 
{
	char name[60];
	int roll_number;
	int grade;
};
int main()
{
	struct student_data x;
	struct student_data y;
	printf("please enter the name");
	gets(x.name);
	printf("please enter the roll number");
	scanf("%d",&x.roll_number);
printf("please enter the grades");
	scanf("%d",&x.grade);
	getchar();
		printf("please enter the name\n");
	gets(y.name);
	printf("please enter the roll number");
	scanf("%d",&y.roll_number);
printf("please enter the grades");
	scanf("%d",&y.grade);
	
		printf("The name is %s \n",x.name);
         	printf("the roll number is %d \n",x.roll_number);
	printf("the grade is %d \n",x.grade);
	
	printf("The name is %s \n",y.name);
         	printf("the roll number is %d \n",y.roll_number);
	printf("the grade is %d",y.grade);
	return 0;
}