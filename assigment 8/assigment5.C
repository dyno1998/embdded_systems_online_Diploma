#include<stdio.h>
struct Semp_data 
{
	char str[50];
	int ID;	
};
int main()
{
	
struct Semp_data s={"mohanad",101};
	
struct Semp_data m={"Ahmed",102};
struct Semp_data a={"Sayed",103};
 struct Semp_data (*array[])={&s,&m,&a};
 struct Semp_data (*(*array1)[3])=&array;

printf("%d",(*(*array1))->ID);


	return 0;
}