/*This source code is also the implemention of  insertion sort algorithm to sort elements of array.*/
/*This program is little complex because it contains multiple loops.*/
/*Program to Sort array in descending order*/
#include <stdio.h>
int main()
{
				int data[100],n,i,j,hold,k;
				printf("Enter number of terms(should be less than 100): ");
				scanf("%d",&n);
				printf("Enter elements: ");
				for(i=0;i<=n-1;++i)
				{
								scanf("%d",&data[i]);
				}
				for(i=1;i<=n-1;++i)
				{
								for(j=0;j<i;++j)
												if(data[j]<data[i])
																/*To sort elements in ascending order change < to > in above line.*/
												{
																hold=data[i];
																k=i;
																while(k!=j)
																{
																				data[k]=data[k-1];
																				--k;
																}
																data[j]=hold;
												}
				}
				printf("In descending Order: ");
				for(i=0;i<=n-1;++i)
				{
								printf("%d    ",data[i]);
				}
				return 0;
}
