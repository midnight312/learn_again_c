#include <stdio.h>


int main(void)
{
	int arr[3][4];
	 **arr = 0;
	 arr[0][1] = 1;
	 arr[0][2] = 2;
	 arr[0][3] = 3;
	 arr[1][0] = 4;
	printf("gia tri tai a[0][0] = %d\n",**arr );
}
