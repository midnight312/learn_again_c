#include <stdio.h>

void print_string(char *p[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("%s",p[i]);
	}
}

int main(void)
{
	//char *message[4] = {"Fpt", "Software", "Workfore", "Assurance"};
	//print_string(message, 4);
	char *ch = "i wanna test it look for it run as i want?";
	printf("%s",ch);
}
