//Q.2 Write a Program to swap two variables using Pointers.
#include<stdio.h>
void main()
{
	int x,y,swap;
	int *num1,*num2;
	
	printf("enter value of x");
	scanf("%d",&x);
	printf("enter value of y");
	scanf("%d",&y);
	
	num1=&x;
	num2=&y;
	
	swap = *num1;
	*num1= *num2;
	*num2=swap;
	
	printf("swap A=%d & B=%d",*num1,*num2);
}