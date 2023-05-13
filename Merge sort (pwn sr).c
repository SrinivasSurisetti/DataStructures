#include<stdio.h>
#define min(a,b) a<b ?a:b
void merge(int *ar,int L,int mid,int R) {
	int res[R - L + 1];
	int i = L,j = mid + 1,k = 0;
	while(i<=mid && j<=R)
	{
		if(ar[i]<=ar[j]) res[k++] = ar[i++];
		else res[k++] = ar[j++];
	}
	while(i<=mid) res[k++] = ar[i++];
	while(j<=R) res[k++] = ar[j++];
	k=0;
	for(i=L;i<=R;i++) {
		ar[i] = ar[k++]; 
	}
}
void merge_sort(int *ar,int n) {
	int p,i,L,R,mid;
	for(p=1;p<n;p*=2) {
		for(i=0;i<n;i+=2*p) {
			L=i;
			R = min(L+2*p-1,n-1);
			mid=min(L+p-1,n-1);
			merge(ar,L,mid,R);
		}
	}
}
int main() {
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int ar[n],i,p;
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
   	merge_sort(ar,n);
	for(i=0;i<n;i++) {
		printf("%d ",ar[i]);
 	}
// 	for(p=0;p<n;p*=2) {
//		printf("\n%d ",ar[p]);
// 	}
}
