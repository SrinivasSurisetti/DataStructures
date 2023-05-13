#include<stdio.h>
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int lom_part(int *ar,int l,int r) {
	int pivot = ar[r],i=l-1,j;
	for(j=1;j<r;j++) {
		if(ar[j]<pivot) {
			i+=1;
			swap(&ar[i],&ar[j]);
		}
	}
	swap(&ar[i+1],&ar[r]);
	return i + 1;
}
void quick_sort(int *ar,int l,int r) {
	if(r>l) {
		int p = lom_part(ar,l,r);
		quick_sort(ar,l,p-1);
		quick_sort(ar,p+1,l);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	int i,ar[n];
	for(i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}


	quick_sort(ar,0,n-1);
	for(i=0;i<n;i++) {
		 printf("%d ",ar[i]);
	}	
}

