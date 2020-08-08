#include <stdio.h>

int calcSum(int (*a)[4]);
int main() {
	int arr[4][4];

	A: printf("Here are your numbers : \n");
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			/* code */
			scanf("%d", &arr[i][j]);
		}
		/* code */
	}

	int evensum =0, oddsum = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			/* code */
			// scanf("%d", &arr[i][j]);
			if (j%2 == 0)
			{
				evensum = evensum + arr[i][j];
				/* code */
			}

			if (j%2 != 0)
			{
				oddsum = oddsum + arr[i][j];
				/* code */
			}

		}
		/* code */
	}



	if (oddsum > evensum)
	{
		printf("You belong to Team B\n");
		return 0;
		/* code */
	} else if(oddsum == evensum){
		goto A;
	}
	else {
		printf("You belong to Team A\n");
		return 0;
	}

}