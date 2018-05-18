#include <stdio.h>

int main() {
	int count = 5, sum = 0;
	int arr[30];
	int flag =0;
	printf("Enter the temperature in Kelvin:\n");
	for (int i = 0; i < count; ++i)
	{

		scanf("%d", &arr[i]);
		/* code */
	}


for (int i = 0; i < count; ++i)
{
	if (arr[i] == 0)
	{
		/* code */
		flag ++;

	}
	/* code */
}
if (flag == 5)
{
	/* code */
	printf("The Metal is not yet heated.\n");
	return 0;
}

	
	for (int i = 0; i < count; ++i)
	{
		/* code */
		if (arr[i] < 0)
		{
			/* code */
			continue;
		}
		sum = sum + arr[i];
	}

	printf("The Metal is totally heated for %d Kelvin\n", sum);


}