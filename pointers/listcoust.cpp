#include <stdio.h>
void discount(char (*names)[30]);
void discount(char (*names)[30]) {

}



int main() {
	char arr[5000][40];
	int size[5000];


	for (int i = 0; i < 5000; ++i)
	{
		/* code */
		size[i] = 0;
	}

	printf("List of customers\n");
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		scanf("%s", arr[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		int j = 0;
		while(arr[i][j] != '\0') {
			size[i]++;
			j++;
		}
	}

	int lar = size[0];
	for (int i = 0; i < 5; ++i)
	{
		if (size[i+1] >size[i])
		{
			lar = size[i+1];
			/* code */
		}
		/* code */
	}

	for (int i = 0; i < 5; ++i)
	{
		if (size[i] == lar)
		{
			printf("%s must be given 50 percent off on his/her next purchase\n",arr[i]);
			/* code */
		}
		/* code */
	}



	
}