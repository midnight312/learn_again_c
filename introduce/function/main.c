#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
	return ((((c>d)?c:d)>((a>b)?a:b))?((c>d)?c:d):((a>b)?a:b));	
}
int main(void)
{	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans = max_of_four(a,b,c,d);
	printf("%d",ans);
	return 0;
}
