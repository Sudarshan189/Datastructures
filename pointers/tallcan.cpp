#include <stdio.h>
#include <stdlib.h>
int birthdayCakeCandles(int n, int *candles);

int birthdayCakeCandles(int n, int *candles) {
	return 0;
}

int main() {
int *arr;
int n;

printf("Enter the no. of candles: \n");
scanf("%d",&n);
if (n <= 0)
{
	/* code */
	printf("Invalid number of candles\n");
	return 0;
}

arr = (int *)malloc(n*sizeof(int));

printf("Enter the height of each candle:\n");

for (int i = 0; i < n; i++)
{

	scanf("%d ",&arr[i]);
	if (arr[i] <= 0)
	{
		/* code */
		printf("Invalid height\n");
		return 0;
	}
	/* code */
}



// check from here 
int lar = arr[0];
for (int i = 1; i < n; i++)
{
	if (arr[i] > lar)
	{
		lar = arr[i];
	}
}

int count = 0;
for (int i = 0; i < n; i++)
{
	if (arr[i] == lar) {
		count++;
	}
}
printf("The number of candles Rhitha blows out: %d", count);
}
