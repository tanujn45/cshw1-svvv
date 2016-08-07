/* 
Author__________Tanuj Namdeo
Program_________Compund Interest
email___________tanujn45@gmail.com

Note: To compile the file in Ubuntu use the command below:
gcc -o comInterest comInterest.c -lm

Note: To run the file use the command below:
./comInterest
*/	 

#include"stdio.h"
#include"math.h"

void main()
{
	float pri, rat, cf, tim, ci;
	printf("Enter the Principal sum(in Rs)\n");
	scanf("%f", &pri);
	printf("Enter the nominal interest rate(in percentage)\n");
	scanf("%f", &rat);
	printf("Enter the compounding frequency(in years)\n");
	scanf("%f", &cf);
	printf("Enter the time(in years)\n");
	scanf("%f", &tim);
	ci = pri * pow((1 + (rat/100)/cf), (tim * cf));
	printf("Compound Interest = %.2f\n\n", ci);
}
