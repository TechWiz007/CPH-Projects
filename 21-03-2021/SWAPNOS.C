#include<stdio.h>
#include<conio.h>

void main ()

{
	int num1;
	int num2;
	clrscr();
	printf("Enter the value for num1 and num2...\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("Before swapping: %d, %d.\n");
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping: %d, %d.\n");
	getch();
}
