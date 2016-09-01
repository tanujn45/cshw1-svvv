/* 
Author__________Tanuj Namdeo
Program_________Area of Circle
email___________tanujn45@gmail.com
Note: To compile the file in Ubuntu use the command below:
gcc -o table table.c -std=c99
Note: To run the file use the command below:
./table
*/	 
#include "stdio.h"

void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d", &a);
	if(a >= 32767)
	{
		printf("Out of limit\n");
		return;
	}	
	for(int i = 1; i <= 10; i ++)
	{
		printf("%d * %d = %d\n", a, i, (a * i));
	}
}
/*
void fibonacci()
{
	int a = 0, b = 1, c = 1, n;
	printf("Enter the number of digits\n");
	scanf("%d", &n);
	printf("0\n1\n");
	for(int i = 3; i <= n; i ++)
	{
		printf("%d\n", c);
		a = b;
		b = c;
		c = a + b;
	}
}
*/
