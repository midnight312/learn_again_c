#include <stdio.h>
#include <string.h>

int main(void)
{
	char sen[100];
	//fgets(sen,sizeof(sen),stdin);
	scanf("%[^\n]*s",&sen);
	printf("Hello, World\n%s\n",sen);	
	return 0;

}
