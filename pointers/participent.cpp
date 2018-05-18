#include <stdio.h>

int main() {
	char arr[10][40];
	int count;
	printf("Enter the no of participants:\n");
	scanf("%d",&count);

	if (count <= 0)
	{
		/* code */
		printf("Invalid Input\n");
		return 0;
	}

	printf("Enter the name of the participants:\n");

	for (int i = 0; i < count; ++i)
	{
		/* code */
		scanf("%s",arr[i]);
	}

	printf("The participants list\n");

for (int i = 0; i < count; ++i)
	{
		/* code */
		
		printf("%s\n",arr[i]);
	}






}