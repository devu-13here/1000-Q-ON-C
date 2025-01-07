#include<stdio.h>


//To find remainder of two given numbers
int main()
{
	
	int a, b;
	printf("Enter the first number:");
	scanf("%d", &a);
	printf("Enter the second number:");
	scanf("%d",&b);
	
	int divi = (a/b);
	
	int remainder = ( a - (b*divi) );
	printf("The remainder is :");
	printf("%d",remainder);
		
	return 0;
	
}