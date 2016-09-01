/* 
Author__________Tanuj Namdeo
Program_________Factorial of a number
email___________tanujn45@gmail.com

Note: copy the code in a file and name it fact.c

Note: To compile the file in Ubuntu use the command below:
gcc -o fact fact.c -std=c99

Note: To run the file use the command below:
./fact
*/

#include "stdio.h"

void main()
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
