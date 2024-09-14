#include<stdio.h>
int main()
{
	int num1, num2;
	printf("\nenter the value of num1:");
	scanf("\n%d",&num1);
	printf("\nenter the value of num2:");
	scanf("\n%d",&num2);
	printf("\n the value of  division %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
	return 0;
}
