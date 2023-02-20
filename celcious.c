#include<stdio.h>
int main()
{
	
	float c,f;
	
	printf("Enter the degree of celcious: ");
	scanf("%f",&c);
	
	f = c * 1.8 + 32;
	
	printf("Fahrenheit = %f",f);
	
	return 0;
}
