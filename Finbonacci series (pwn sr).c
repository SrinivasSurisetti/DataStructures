#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a=0,b=1;
	int c=a+b;
    printf("%d %d",a,b);
	while(c<n)
	{
	  a=b;
	  b=c;
	  c=a+b;
}
	printf(" %d",c);
}
