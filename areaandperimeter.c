
//Area and Perimeter

#include<stdio.h>

int main()
{
	int l , b ;
	printf("Enter the length: ");
	scanf("%d" , &l);
	
	printf("Enter the breadth :");
	scanf("%d" , &b );
	
	int a = l*b ;
	int p = 2*(l+b);
	
	printf("The area is: %d \n" , a);
	printf("The perimeter is : %d \n" , p);
	
	if(a > p ){
		printf("The Area is bigger than Perimeter \n");
	}
	else{
		printf("The perimeter is bigger than Area \n");
	}
	
	return 0;
}