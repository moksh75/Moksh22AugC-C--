#include<stdio.h>

void main()

{
	int age;
	printf("Enter age:");
	scanf("%d" ,&age);
	
	if(age>=18)
	{
		printf("you are eligible to vote");
		
	}
	else
	{
		printf("you are not eligble to vote");
		
	}
}