#include<stdio.h>
#include<conio.h>

int main(void)

{
	int num1;
	clrscr();
	printf("Input num1: \n");
	scanf("%d", &num1);
	if (num1%5==0)
	printf("num1 is divisible by 5");
	else
	printf("num1 is not divisible by 5");
	getch();
	return 0;
}