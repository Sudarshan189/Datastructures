#include <stdio.h>

int main() {
	int count;
	int arr[11];
	int sum = 0;
	printf("Enter the no of sweets\n");
	scanf("%d",&count);

	if (count >10 || count < 0)
	{
		/* code */
		printf("Sorry! You can buy 10 varieties of sweets only\n");
		return 0;
	}


	printf("Enter the cost of sweets\n");
	for (int i = 0; i < count; ++i)
	{
		scanf("%d",&arr[i]);
		/* code */
	}

	
	for (int i = 0; i < count; ++i)
	{
		/* code */
		if (arr[i] <= 0)
		{
			/* code */
			printf("Cost should be positive\n");
			return 0;
		}
	}



	for (int i = 0; i < count; ++i)
	{
		sum = sum + arr[i];

		/* code */
	}

	if (sum > 1000)
	{
		/* code */
		printf("Oh it's out of budget\n");
		return 0;
	}
	printf("You need to pay Rs.%d\n",sum);
}