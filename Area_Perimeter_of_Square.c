/* 
Author__________Tanuj Namdeo
Program_________Perimeter and Area of square
email___________tanujn45@gmail.com

Note: copy the code in a file and name it square.c

Note: To compile the file in Ubuntu use the command below:
gcc -o square square.c

Note: To run the file use the command below:
./square
*/	 
#include "stdio.h"

void main()
{
	int s, k, A, P;	
	printf("Enter the side of the square\n");
	scanf("%d", &s);
	printf("Enter the choice\n1. Perimeter\n2. Area\n");
	scanf("%d", &k);
	switch(k)
	{
		case 1: printf("You have entered perimeter\n");
			P = 4 * s;
			printf("Perimeter = %d\n", P);
			break;	
		case 2: printf("You have entered area\n");
			A = s * s;
			printf("Area = %d\n", A);
			break;
		default:printf("Wrong choice\n");
			break;
	}	
}
