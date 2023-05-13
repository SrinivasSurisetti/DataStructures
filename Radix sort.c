#include<stdio.h>
//void printArray(int *ar,int n) {
//	int i;
//	for(i=0;i<n;i++) {
//		printf("%d",ar[i]);
//	}
//}
int max(int *ar,int n) {
	int i,mx = 0;
	for(i=1;i<n;i++) {
		if(ar[i]>mx) {
			mx=ar[i];
		}
	}
	return mx;
}
int radix_sort(int *ar,int n) {
	int mx = max(ar,n);
	int e = 1; 
	while(mx) {
		int counts[10] = {0};
		int buckets[10][n];
		int i;
		for(i=0;i<n;i++) {
			int place = (ar[i]/e)%10;
			buckets[place][counts[place]++] = ar[i];
		}
		int k=0,j;
		for(i=0;i<10;i++) {
			for(j=0;j<counts[i];j++) {
				ar[k++] = buckets[i][j];
			}
		}
		e *= 10;
		mx /= 10;
	}
}
int main() {
	int n;
	printf("Enter the no' of elements\n");
	scanf("%d",&n);
	int i,ar[n];
	printf("Enter the Elements\n");
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	radix_sort(ar,n);
	for(i=0;i<n;i++) printf("%d ",ar[i]);
}
