/* 
Author__________Tanuj Namdeo
Program_________Area of Triangle
email___________tanujn45@gmail.com

Note: copy the code in a file and name it areaTriangle.c

Note: To compile the file in Ubuntu use the command below:
gcc -o areaTriangle areaTriangle.c -lm

Note: To run the file use the command below:
./areaTriangle
*/	 

#include"stdio.h"
#include"math.h"

void main()
{
	float a, b, c, s, area;
	printf("Enter the side 1\n");
	scanf("%f", &a);
	printf("Enter the side 2\n");
	scanf("%f", &b);
	printf("Enter the side 3\n");
	scanf("%f", &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("The area of the triangle is = %.2f\n\n", area);	
}
