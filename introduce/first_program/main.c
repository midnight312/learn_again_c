#include <stdio.h>

int main(void)
{
	char ch;
	char s[100];	
	char sen[100];
	scanf("%c",&ch);
	scanf("\n");
	scanf("%s",&s);
	scanf("\n");
	scanf("%[^\n]*s",sen);	
	//display
	printf("%c\n",ch);
	printf("%s\n",s);
	printf("%s\n",sen);	
	return 0;
}

