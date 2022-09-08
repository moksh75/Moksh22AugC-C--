#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\n******choice calculator*****");
	printf("\nEnter A:");
	scanf("%d" ,&a);
	printf("\nEnter B:");
	scanf("%d" ,&b);
	printf("\nEnter your choice ?");
	scanf("%d" ,&choice);
	printf("\nA = %d, B = %d ,a,b");
	printf("\n\n press 1 for addition");
	printf("\n\n press 2 for subtraction");
	printf("\n\n press 3 for multiplication");
    printf("\n\n press 4 for dicvision");
    
    if(choice==1)
    {
    	printf("\nAddition is : %d " ,(a+b));
	}
	else if(choice==2)
	{
		printf("\nsubtraction is :%d" ,(a-b));
	}
	else if(choice==3)
	{
		printf("\nmultiplication is :%d" ,(a*b));
	}
	else if(choice==4)
	{
		printf("\ndivision is :%.2f" ,(a/b));
	}
	else
	{
	 printf("\nInvalid choice");
	}
}