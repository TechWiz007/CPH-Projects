#include<stdio.h>
#include<conio.h>

void main()

{
	int n;

	clrscr();
	printf("Input n: \n");
	scanf("%d", &n);
	if (n%2==0)
	printf("n is even number.\n");
	else
	printf("n is odd number.\n");
	getch();
}