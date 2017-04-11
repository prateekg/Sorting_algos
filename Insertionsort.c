#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Insertionsort(int A[], int size){
	int i,j,k,temp;
		
	for(i=1; i<size; i++){
		
		j=i;
		while(A[j-1]>A[j] && j>=0){
			swap(&A[j],&A[j-1]);
			j=j-1;
		}
	}

	for(k=0;k<size;k++){
			printf("%d\t",A[k]);
		}
		printf("\n");
}

int main(){
	int n,k;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);

	int* A = (int *)malloc(n*sizeof(int));

	printf("Enter %d numbers in array:\n",n);
	for(k=0;k<n;k++){
			scanf("%d",&A[k]);
	}
	
	Insertionsort(A, n);

} 