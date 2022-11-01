#include<stdio.h>
struct scomplex
{
  double r;
  double i;  
};
struct scomplex readvalue(char name[]);
struct scomplex addcomplex(struct scomplex a,struct scomplex b);
void printcomplex(struct scomplex total);
int main()
{
	
struct scomplex x,y,z;
 
x=readvalue("X");
y=readvalue("Y");	
z=addcomplex(x,y);	
printcomplex(z);	
	return 0;
}
struct scomplex readvalue(char name[])
{
	struct scomplex m; 
	printf("enter the value of %s",name);
	scanf("%lf",&m.r);
	scanf("%lf",&m.i);
	return m;
}
struct scomplex addcomplex(struct scomplex a,struct scomplex b)
{
	struct scomplex total;
	total.r=a.r+b.r;
	total.i=a.i+b.i;
	return total;
}
void printcomplex(struct scomplex total)
{
	printf("sum = %lf +%lfi",total.r,total.i);
}