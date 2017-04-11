#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*64 25 12 22 11

11 64 25 12 22

11 12 64 25 22

11 12 22 64 25

11 12 22 25 64
*/
void selectionsort(int A[], int size){
	int i,j,min,pos,k,flag;

	for(i=0;i<size-1;i++){
		min=A[i];

		for(j=i+1;j<size;j++){
			if(min>A[j]){
				pos = j;
				min=A[j];
			}	
		}
		if(pos!=i)
			swap(&A[i], &A[pos]);
		
		for(k=0;k<size;k++){
			printf("%d\t",A[k]);
		}
		printf("\n");
		
	}
}

int main(){
	int n;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);

	int* A = (int *)malloc(n*sizeof(int));
	int i, j;
	printf("Enter %d numbers in array:\n",n);
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);
	}

	//selectionsort
	selectionsort(A, n);

} 