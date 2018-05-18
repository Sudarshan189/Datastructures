#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int *arr;
	int brr[10]={0,0,0,0,0,0,0,0,0,0};

	printf("Enter the no. of elements:\n");
	scanf("%d", &n);

	if (n > 100 || n < 1)
	{
		printf("Invalid Input\n");
			return 0;
		/* code */
	}

	arr = (int *)malloc(n*sizeof(int));
	printf("Enter the elements:\n");

	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d ",&arr[i]);
		if (arr[i] <= 0)
		{
			printf("Invalid Input\n");
			return 0;
			/* code */
		}

	}

	for (int i = 0; i < n; ++i)
	{
		int s = arr[i];
		brr[s] = brr[s]+1;
		/* code */
	}

// for (int i = 1; i < 10; ++i)
// 	{
// 		printf("%d\n",brr[i]);
// 		/* code */
// 	}



		int lar = brr[1];
	for (int i = 1; i < 9; ++i)
	{
		if (brr[i+1] > brr[i])
		{
			lar = brr[i+1];
			 // printf("%d\n",lar);
			/* code */
		}
		/* code */
	}
	
	if (lar == n)
	{
		printf("List is already equalized.  No deletion required\n");
		return 0;
		/* code */
	}

	printf("Minimum no. of deletion required is: %d\n", (n-lar));





}