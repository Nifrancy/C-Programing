//program to find the area of a circle using a function
#include<stdio.h>
float area(float radius);
int main()
{
	#define pi 3.142
	float radius,result;
	printf("ENTER THE RADIUS OF CIRCLE");
	scanf("%f",&radius);
	result=area(radius);
	printf("THE AREA IS %f",result);
	return 0;
}
float area(float radius)
{
	float c;
	#define pi 3.142
	c=pi*radius*radius;
	return c;
}