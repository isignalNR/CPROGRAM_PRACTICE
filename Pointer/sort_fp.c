#include <stdio.h>
#define MAX_SIZE 5

//void Bubblesort(int *A, int n)
// call back function should compare two integers, should return 1 if the first element has higher rank, 0 if elements are equal, -1 if second element has higher rank

int compare(int a, int b)
{
		if(a<b) return 1;
		else return -1;
}

void Bubblesort(int *A, int n, int (*compare)())
{
		int i, j, temp;
		for(i=0;i<n;i++)
			for(j=0;j<n-1;j++)
			{
				//if(A[j] > A[j+1]) // compare and swap if needed what if decresing order needed => writing duplicate code just by changing the condition 
				if(compare(A[j],A[j+1])<0) // compare and swap if needed what if decresing order needed => writing duplicate code just by changing the condition 
				{
						temp = A[j];
						A[j] = A[j+1];
						A[j+1] = temp;
				}
			}
}

int main()
{
//		int i, A[] = {3,2,1,5,6,4};
		//int i, A[] = {-33,32,-1,50,-6,4};
		int i, A[MAX_SIZE];
		printf("Enter Array Elements (Max 5)\n");
		for(i=0;i<5;i++) scanf("%d", &A[i]);
		printf("Sorting Wait..!!\n");
		Bubblesort(A, MAX_SIZE, compare);
		//Bubblesort(A, MAX_SIZE);
		for(i=0;i<5;i++) printf("%d\n", A[i]);
		return 0;
}
