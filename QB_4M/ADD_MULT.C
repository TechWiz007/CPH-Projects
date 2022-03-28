#include<stdio.h>
#include<conio.h>

void main()

{
	int num1;
	int num2;
	int num3;
	int sum;
	int product;
	clrscr(),
	printf("Let's add two numbers.\n");
	printf("Enter the value of the first number: \n");
	scanf("%d", &num1);
	printf("Enter the value of the second number: \n");
	scanf("%d", &num2);
	sum=num1+num2;
	printf("The sum of the first number and second number is: %d\n", sum);
	product=num1*num2;
	printf("Now let's multiply the same... And the product is: %d\n", product);
	getch();
}