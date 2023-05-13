#include<stdio.h>
void merge(int *ar,int m,int *br,int n) {
	int res[m+n];
	int i = 0,j = 0,k = 0;
	while(i<m && j<n) {
	 		if(ar[i]<=br[j]) res[k++] = ar[i++];
		else res[k++] = br[j++];
	}
	while(i<m) res[k++] = ar[i++];
	while(j<n) res[k++] = br[j++];
	int z;
	for(z=0;z<(m+n);z++) printf("%d ",res[z]);
}
int main() {
	int m,n,i,j;
	printf("Enter the size of 1st array\n");
	scanf("%d",&m);
	printf("Enter the size of 2nd array\n");
	scanf("%d",&n);
	int ar[m],br[n];
	for(i=0;i<m;i++) scanf("%d",&ar[i]);
	for(j=0;j<n;j++) scanf("%d",&br[j]);
	merge(ar,m,br,n);
//	int o=m+n;
//	for(i=0;i<o;i++) printf("%d",res);
	return 0;
}
