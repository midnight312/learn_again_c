#include <stdio.h>


void Alocate(int **p)
{
	*p = (int *)malloc(4 * sizeof(int));	
	printf("already into function!\n");
}

int* alocate(int n)
{
	int *p = (int *)malloc( n * sizeof(int));
	return p;
}

int main(void)

{
	int *a = NULL;
	//Alocate(&a);
	a = alocate(4);
	printf("gia tri trong a la : %d\n",a);
}
