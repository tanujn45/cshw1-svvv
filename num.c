/*
Author__________Tanuj Namdeo
Program_________Print Prime, Even and Odd numbers upto 100
email___________tanujn45@gmail.com

Note: copy the code in a file and name it num.c

Note: To compile the file in Ubuntu use the command below:
gcc -o num num.c -std=c99

Note: To run the file use the command below:
./num
*/	

#include"stdio.h" 

void main()
{
	char ch;
	printf("Enter a charachter\n");
	scanf("%c", &ch);
	if (ch < 97)
	{
		printf("Lower case = %c\n", (ch + 32));
	}		
	else
	{
		printf("Upper case = %c\n", (ch - 32));
	}
}#include "stdio.h"

void main()
{	
	printf("Enter your choice\n");
	int n, i = 3, k, c;
	printf("1.Prime Numbers\n2.Even Numbers\n3.Odd Numbers\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1: printf("Prime Numbers upto 100\n1\n");
			for (k = 2; k <= 25;)
                        {
				for (c = 2; c < i; c ++)
				{
					if (i % c == 0)
					    break;
			        }
			     	if (c == i)
			        {
					printf("%d\n", i);
					k ++;
			        }
			        i ++;
			}
			break;	

		case 2: printf("Even Numbers upto 100\n");
			for(i = 0; i <= 100; i ++)
			{
				if (i % 2 == 0)
					printf("%d\n", i);
			}
			break;

		case 3: printf("Odd Numbers upto 100\n");
			for(i = 0; i <= 100; i ++)
			{
				if (i % 2 != 0)
					printf("%d\n", i);
			}
			break;

		default:printf("Wrong choice!\n");
			break;
	}
} 
