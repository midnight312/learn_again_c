#include <stdio.h>

int main(void)
{
	int arr[3][4], i;
	int *p = (int *)arr;
	for(i = 0; i< 12; i++)
	{
		printf("Input element %d: ",i);
		scanf("%d", p + i);
	}

	//display
	for(i = 0; i < 12; i++)
	{
		printf("%d",*(p + i));
	}
	printf("\n");
	return 0;
}
