#include<stdio.h>


//sum of two numbers
int main(){
	int num1 , num2 ,result;
	printf("Enter two numbers two find their sum:");
	scanf("%d %d", &num1 ,&num2);
	
	result = num1 + num2;
	
	printf("The result of the sum of the numbers is:");
	printf("%d",result);
	
}