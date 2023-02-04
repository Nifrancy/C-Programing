//disconting//
#include<stdio.h>
int main()
{
	int a,discount;
	printf("ENTER THE VALUE OF a:");
	scanf("%d",&a);
	if(a>5000){
		discount=a*1/10;
		printf("YOU HAVE RECEIVED A DISCOUNT OF %d",discount);
	}
	else(printf("SORRY YOU HAVE NOT QUALIFIED FOR A DISCOUNT"));
	return 0;
}