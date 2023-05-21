#include<stdio.h>
#include<stdlib.h>
int main() {
	int n=5,ar[n];
	//ARRAY *
	int *ptr = (int *) malloc (n*sizeof(int));
	for (int i= 0;i<5;i++) {
		scanf("%d",&ar[i]);
	}
	//ARRAY NAME IT'S ACTS AS A POINTER
	//POINTS TO THE 1ST ELEMENT IN THE ARRAY
	for( int i=0 ; i < 5 ; i++) {
		printf("%d ",*(ar+i));
	}
}

