#include<stdio.h>
int main()
{
	
	int s;
	float h,da,t,total;
	
	printf("Enter your base salary: ");
	scanf("%d",&s);

	printf("Enter your HRA: ");
	scanf("%f",&h);
	
	printf("Enter your DA: ");
	scanf("%f",&da);
	
	printf("Enter your TA: ");
	scanf("%f",&t);
	
	h = h * s / 100;
	da = da * s / 100;
	t = t * s / 100;
		
	total = s + h + da + t;
	
	printf("Your gross salary = %f",total);
	return 0;
}
