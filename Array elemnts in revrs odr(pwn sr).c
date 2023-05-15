#include<stdio.h>
int main()
{
	int n,i,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(s=n-1;s>=0;s--) {
		printf("%d ",a[s]);
	}
}
