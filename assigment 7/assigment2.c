#include<stdio.h>
struct distance
{
	int feet;
	float inch;
};
int main()
{
	 struct distance x,y,z;
	printf("please enter the amount in feet\n");
	scanf("%d",&x.feet);
printf("please enter the amount in inch\n");
	scanf("%f",&x.inch);
printf("please enter the amount in feet\n");
	scanf("%d",&y.feet);
printf("please enter the amount in inch\n");
	scanf("%f",&y.inch);
	
		
		

	z.feet=x.feet+y.feet;
	z.inch=x.inch+y.inch;
		

	while(z.inch>=12.00)
	{
		z.inch=z.inch-12.00;
		
		++z.feet;
	}
	   printf("\nSum of distances = %d\'-%.1f\"\n",z.feet,z.inch);

	
	
	
	
	return 0;
}