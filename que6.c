//QUESTION 6
//Example 6: Float and Double Input/Output


#include<stdio.h>
int main()
{
	float num1;
	double num2;
	
	
	printf("Enter a number :");
	scanf("%f" , &num1);
	printf("Enter second number :");
	scanf("%lf" , &num2);
	
	printf("num1 = %f \n"  ,num1);
	printf("num2 = %lf \n" , num2);
	
	return 0;
}