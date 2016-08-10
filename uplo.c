/*
Author__________Tanuj Namdeo
Program_________charachter case change
email___________tanujn45@gmail.com
Note: To compile the file in Ubuntu use the command below:
gcc -o uplo uplo.c
Note: To run the file use the command below:
./uplo
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
}
