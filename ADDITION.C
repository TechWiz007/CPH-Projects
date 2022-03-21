#include<stdio.h>
#include<conio.h>

void main ()

{
	int num1;
	int num2;
	int sum;
	clrscr();
	printf("Let's add some numbers...\n");
	printf("Enter the value of num1: \n");
	scanf("%d", &num1);
	printf("Enter the value of num2: \n");
	scanf("%d", &num2);
	sum=num1+num2;
	printf("Sum is %d. \n",sum);
	getch();
}
