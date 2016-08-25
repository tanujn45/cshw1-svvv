/* 
Author__________Tanuj Namdeo
Program_________Roots of Quadratic equation
email___________tanujn45@gmail.com
Note: To compile the file in Ubuntu use the command below:
gcc -o quad quad.c -lm
Note: To run the file use the command below:
./quad
*/

#include "stdio.h"
#include "math.h"

void main()
{	
	float A, B, C, x, y;
	printf("General quadratic equation = Ax^2 + Bx + C\n");
	printf("Enter the values of A, B and C\n");
	scanf("%f%f%f", &A, &B, &C);
	x = (- B + sqrt(pow(B, 2) - 4 * A * C))/2 * A;
	y = (- B - sqrt(pow(B, 2) - 4 * A * C))/2 * A;
	printf("Root 1 = %.2f\nRoot 2 = %.2f\n", x, y); 
}
