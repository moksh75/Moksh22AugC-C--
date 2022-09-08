#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,choice;
	again:
	printf("\n*******Choice Calculator*********");
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	printf("\nA = %d, B = %d",a,b);
	
	printf("\n\nPress 1 for Addition");
	printf("\nPress 2 for Subtraction");
	printf("\nPress 3 for Multiplication");
	printf("\nPress 4 for Division");
	printf("\nPress 5 for Repeat Again");
	printf("\nPress 6 for Exit.");
	printf("\n\nEnter your Choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :printf("\nAddition is : %d",(a+b));
				break;
		case 2 :printf("\nSubtraction is : %d",(a-b));
				break;
		case 3 :printf("\nMultiplication is : %d",(a*b));
				break;
		case 4 :printf("\nDivision is : %.2f",((float)a/b));
				break;
		case 5 :goto again;
				break;
		case 6 :exit(1);
				break;
		default :printf("\nInvalid Choice");
				break;
		
	}
	
	
	
}