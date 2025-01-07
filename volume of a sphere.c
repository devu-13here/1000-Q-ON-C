#include<stdio.h>

int main()
{
	//Volume of a sphere
	int radius;
	printf("Enter the radius: ");
	scanf("%d",&radius);
	
	float m = ((4.0/3)*3.14*radius*radius*radius);
	
	printf("Volume of the sphere is :");
	printf("%f",m);
	
	return 0;
}