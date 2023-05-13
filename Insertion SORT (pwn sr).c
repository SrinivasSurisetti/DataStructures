#include<stdio.h>
void ins(int *ar,int n) {
	int i,j;
	for(i=1;i<n;i++)
	 {
		int key=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>key)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=key;
	}
}
int main() {
	int i,j,n;
	printf("Enter the num of arrays\n");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the arry elements\n");
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	ins(ar,n);
	for(j=0;j<n;j++) printf("%d ",ar[j]);
}
