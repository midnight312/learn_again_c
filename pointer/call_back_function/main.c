#include <stdio.h>

typedef void (*callback)(void);

void my_callback(void)
{
	printf("called function callback\n");
}
void register_callback(callback ptr_callback)
{
	(*ptr_callback)();
}

int main(void)
{
	callback ptr_my_callback = my_callback;
	register_callback(ptr_my_callback);
	return 0;
}

