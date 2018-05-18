#include <stdio.h>

int main() {
	int arr[20][20];
	int brr[20][20];
	int crr[20][20];
	
	int i,j,ar,ac,br,bc;

	printf("Enter the row size of 1st array:\n");
	scanf("%d",&ar);
    printf("Enter the col size of 1st array:\n");
    scanf("%d",&ac);
	printf("Enter the row size of 2nd array:\n");
	scanf("%d",&br);
	printf("Enter the col size of 2nd array:\n");
	scanf("%d",&bc);

	if (ar > 10 || ac > 10 || br > 10 || bc > 10)
	{
		/* code */
		printf("Matrix size exceeds the limit\n");
		return 0;
	}

	if (ar != br || ac != bc)
	{
		/* code */
		printf("Matrix addition not possible\n");
		return 0;
	}



	printf("Enter the first array Elements\n");
	for (int i = 0; i < ar; ++i)
	{
		for (int j = 0; j < ac; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
		/* code */
	}


	printf("Enter the second array Elements\n");
	for (int i = 0; i < br; ++i)
	{
		for (int j = 0; j < bc; ++j)
		{
			scanf("%d",&brr[i][j]);
		}
		/* code */
	}


	for (int i = 0; i < br; ++i)
	{
		for (int j = 0; j < bc; ++j)
		{
			crr[i][j] = arr[i][j] + brr[i][j];
		}
		/* code */
	}

	for (int i = 0; i < br; ++i)
	{
		for (int j = 0; j < bc; ++j)
		{
			printf("%d  ",crr[i][j]);
		}
		printf("\n");

		/* code */
	}


}