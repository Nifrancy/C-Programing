//BANK LOAN//
#include<stdio.h>
int main()
{
	int age,salary;
	printf("\n ENTER YOUR AGE AND SALARY:");
	scanf("%d%d",&age,&salary);
	if(age>=21&&salary>=21000){
		printf("CONGRATULATIONS YOU QUALIFY FOR A LOAN");
		}
		else(printf("YOU DON'T QUALIFY"));
	
	return 0;
}