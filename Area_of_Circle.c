/* 
Author__________Tanuj Namdeo
Program_________Area of Circle
email___________tanujn45@gmail.com

Note: copy the code in a file and name it areaCircle.c

Note: To compile the file in Ubuntu use the command below:
gcc -o areaCircle areaCircle.c -lm

Note: To run the file use the command below:
./areaCircle
*/	 

#include"stdio.h"
#include"math.h"

void main()
{
	float pi = 3.14, rad, area;
	printf("Enter the radius\n");
	scanf("%f", &rad);
	area = pi * pow(rad, 2);
	printf("The area of the circle is = %.2f\n\n", area);	
}

