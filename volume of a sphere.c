//program to find the volume of a sphere using a function
#include<stdio.h>
float volume(float radius);
int main()
{
	#define pi 3.142
	float radius,result;
	printf("ENTER THE RADIUS OF SPHERE");
	scanf("%f",&radius);
	result=volume(radius);
	printf("THE VOLUME IS %f",result);
	return 0;
}
float volume(float radius)
{
	float c;
	#define pi 3.142
	c=pi*4/3*radius*radius;
	return c;
}