#include <stdio.h>
#include <string.h>

int main(void)
{
	char sen[100];
	fgets(sen,sizeof(sen),stdin);
	printf("Hello, World\n%s",sen);	
	return 0;

}
