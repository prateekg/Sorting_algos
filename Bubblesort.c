#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*5 1 4 2 8
*/
void Bubblesort(int A[], int size){
	int i,j,k;

	int flag=0;
	int temp=1;
	while(flag!=1){
		printf("CYCLE %d:\n", temp);
		flag=1;
		for(i=0;i<size-1;i++){
			if(A[i]>A[i+1]){
				swap(&A[i], &A[i+1]);
				flag=0;
			}

			for(k=0;k<size;k++){
				printf("%d\t",A[k]);
			}
			printf("\n");
			}
	temp++;
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
	Bubblesort(A, n);

} 