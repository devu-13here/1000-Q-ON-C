

//Take a positive number and tell if it is odd or even
//Any number divisible by 2 is even
//Any number not divisible by 2 is odd

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n%2 == 0){
    	printf("Even Number");
	}
	else
	{printf("Odd Number");
	}
    return 0;
}

/* Divisible by 5
 if(n%5 == 0){
    	printf("Even Number");
	}
	else
	{printf("Odd Number");
	}
	
	*/
