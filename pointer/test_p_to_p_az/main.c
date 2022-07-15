#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void function_use_pointer_to_pointer(unsigned char **output1)
{
	*output1 = (unsigned char *)malloc(sizeof(unsigned char));
	**output1 = 'a';
}

bool function_alocate_memory(unsigned char *output, unsigned char size)
{
	bool result = false;
	//unsigned char **temp = (unsigned char **)output;
	*output = (unsigned char *)malloc(size * sizeof(unsigned char));
	if(*output != NULL)
	{
		result = true;
	}
	return result;
}

int main()
{
	unsigned char test_pointer = 0;
	unsigned char *test_pointer_to_pointer = NULL;
	bool result = false;
	unsigned char *memory_block;

	function_use_pointer_to_pointer(&test_pointer_to_pointer);
	printf("test pointer to pointer %d\n",test_pointer_to_pointer);

	result = function_alocate_memory(&memory_block, 20);
	printf("result : %d\n",result);
	return 0;
}
