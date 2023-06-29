/*
	Name: Vishnu Solanki Raika
	Date: 10-10-21 21:41
	Description: This program help to find percentage of marks from total 100 marks.
*/

#include<stdio.h>
int main()
{
	int sub1, sub2, sub3, sub4, sub5;
	float total;
		
	printf("Hello My Nmae Is Percentage Finder :) Please Enter Your Marks One by One\n");
	
		printf("Enter marks of sub 1\n");
	scanf("%d", &sub1);
	
		printf("Enter marks of sub 2\n");
	scanf("%d", &sub2);
	
		printf("Enter marks of sub 3\n");
	scanf("%d", &sub3);
	
		printf("Enter marks of sub 4\n");
	scanf("%d", &sub4);
	
		printf("Enter marks of sub 5\n");
	scanf("%d", &sub5);
	
	total = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	
	if((total<=40) || sub1 <33 || sub2 <33 || sub3 <33 || sub4 <33 || sub5 <33 )
	{
		printf("Your total percentage is %f and You are Fail!!!!:(\n", total);
	}
	
	else
	{
		printf("Your total percentage is %f and You are Pass!!!!:)\n", total);
	}
	
	if(total>90)
	{
		printf("GREAT!!!!!!! You got more then 90% ");
	}
	
	
	else if(total<60)
	{
		printf("You need more practice. KEEP IT UP!!!!!!");
	}
	
	else
	{
		printf("GOOD WORK\n:)");
	}
	
	
	printf("ITS  NOT ABOUT PERFECT, ITS ABOUT EFFORTS");
	
	
		 return 0;
}
		 

