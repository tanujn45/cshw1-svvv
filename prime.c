/* 
Author__________Tanuj Namdeo
Program_________Prime number
email___________tanujn45@gmail.com

Note: copy the code in a file and name it prime.c

Note: To compile the file in Ubuntu use the command below:
gcc -o prime prime.c -std=c99

Note: To run the file use the command below:
./prime
*/

#include "stdio.h"

void main()
{	
	int n;
	printf("Enter a number\n");
	scanf("%d", &n);
	for(int i = 2; i < n; i ++)
	{
		if(n % i == 0)
		{
			printf("Not a Prime number\n");
			return;
		}
	}
	printf("Prime number\n");
}
