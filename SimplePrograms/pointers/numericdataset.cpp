#include <stdio.h>
#include <stdlib.h>


int sum(int n, int * a);
int median(int n, int * a);
float mean(int n, int * a);


int main() {
	int n;
	int *arr;

	scanf("%d",&n);
	if (n < 1 || n>20 || n%2==0)
	{
		printf("Invalid Input\n");
		return 0;
	}
	arr = (int *)malloc(n*sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		/* code */
		sum = sum+arr[i];
	}

	float mean = sum/n;

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if (arr[j] >arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	// for (int i = 0; i < n; i++) {
	// 	printf("--> %d\t",arr[i]);
	// }

	int g = n;
	int median = arr[(g/2)];

	printf("%d\n%.2f\n%d",sum,mean,median);

}