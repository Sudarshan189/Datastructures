#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int *arr;
	
	printf("Enter the total numbers in the token: \n");

	scanf("%d",&n);
	if (n <= 0)
	{
		printf("Invalid Input\n");
		return 0;
	}

	arr = (int *)malloc(n*sizeof(int));
	printf("Enter the numbers:\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	
	}

int loose = 0;

	for (int i = 0; i < n-1; ++i)
	{
		if (arr[i] >= arr[i+1])
		{		
				//printf("%d, %d\n",arr[i],arr[i+1]);
				loose = 1;
				break;
			/* code */
		}
	}

	if (loose == 1)
	{
		/* code */
		printf("You fail!!\n");
	}
	else {
		printf("You win!!\n");
	}


	





}