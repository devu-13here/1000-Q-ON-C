

//SP AND CP ,TO determine 
//Profit and Loss

#include<stdio.h>

int main()
{   
    int sp , cp;
	printf("Enter the Selling Price");
	scanf("%d" , &sp);
	
	printf("Enter the cost Price");
	scanf("%d" , &cp);
	
	if( sp > cp){
		printf("There is Profit");
	}
	else if (sp = cp){
		printf("There is no Profit , no Loss ");
	}
	else{
		printf("There is Loss");
	}
	
	return 0;
}