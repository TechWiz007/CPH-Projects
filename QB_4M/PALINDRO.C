#include<stdio.h>
#include<conio.h>

void main()

{
	int num1;
	int r;
	int sum=0;
	int temp;

	clrscr();
	printf("Input num1: \n");
	scanf("%d", &num1);
	temp=num1;
	while (num1>0)
	{
	r=num1%10;
	sum=(sum*10)+r;
	num1=num1/10;
	}
	if(temp==sum)
	printf("This is a palindrome number.");
	else
	printf("Error 404: Forbidden...");
	getch();
}
