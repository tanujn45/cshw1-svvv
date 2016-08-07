/* 
Author__________Tanuj Namdeo
Program_________Profit & Loss
email___________tanujn45@gmail.com

Note: To compile the file in Ubuntu use the command below:
gcc -o prolos prolos.c

Note: To run the file use the command below:
./prolos
*/	 

#include"stdio.h"

void main()
{
	float cos, sel, pl;
	printf("Enter the cost price(in Rs)\n");
	scanf("%f", &cos);
	printf("Enter the selling price(in Rs)\n");
	scanf("%f", &sel);
	pl = sel - cos;
	if (pl < 0)
	{
		printf("There is a loss of Rs %.2f\n\n", (-1.0 * pl));	
	}	
	else if (pl > 0)
	{
		printf("There is a profit of Rs %.2f\n\n", pl);	
	}	
	else
	{
		printf("Neither profit nor loss\n\n");	
	}	
}
