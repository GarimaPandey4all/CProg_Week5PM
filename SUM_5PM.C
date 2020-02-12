#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c;
	clrscr();

	printf("Enter value for a:");
	scanf("%d", &a);

	printf("Enter value for b:");
	scanf("%d", &b);

	c = a + b;

	printf("Addition is: %d", c);

	getch();

}