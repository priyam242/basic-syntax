//swap the numbers with extra value
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("\nvalue of a before swapping:%d",a);
	printf("\nvalue of b before swapping:%d",b);
	c=a;
	a=b;
	b=c;
	printf("\nvalue of a after swapping:%d",a);
	printf("\nvalue of b after swapping:%d",b);
	
	return 0;
}
