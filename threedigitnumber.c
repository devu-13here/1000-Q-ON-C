

//multiple condition
//&& and \\
//Take positive number and tell if it is a three digiyt number or not.
// n> 99 and n<1000
#include<stdio.h>

int main(){
	int n;
	printf("Enter a number :");
	scanf("%d" , &n);
	if(n>99 && n<1000){
		printf("It is a three digit number");
	}
	else{
		printf("It is not a three digit number");
	}
	
	
	
}