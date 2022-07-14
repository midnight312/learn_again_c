#include <stdio.h>

void func(int *a)
{
	*a = *a + 1;	
}

int main()
{
	int a = 5;
	func(&a);
	printf("%d",a);
	return 0;
}
