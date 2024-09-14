// swap the values with (+,-)
#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("\nvalue of a before swapping:%d",a);
	printf("\nvalue of b before swapping:%d",b);
    a=a+b;
	b=a-b;
    a=a-b;
    printf("\nvalue of a after swapping:%d",a);
    printf("\nvalue of b after swapping:%d",b);
    return 0;
}
