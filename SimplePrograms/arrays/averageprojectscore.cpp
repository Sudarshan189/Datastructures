#include <stdio.h>
int main() {
int count;
int arr[20];
float sum = 0;

for (int k = 0; k < 2; ++k)
{
	/* code */

if (k == 0)
{
	printf("Enter no of projects :\n");
	/* code */
} else {
	printf("Enter no of projects:\n");
}

scanf("%d",&count);
if (count > 10)
{
	printf("No of projects exceed the limit.\n");
	return 0;
	/* code */
}

printf("Enter the marks:\n");
for (int i = 0; i < count; ++i)
{
	scanf("%d",&arr[i]);
}

for (int i = 0; i < count; ++i)
{
	sum = sum + arr[i];
}

float avg = sum /count;

printf("The average score is %.2f.",avg);

if (avg < 80)
{
	printf("Try again.");
} else {
	printf("\nYou are eligible for project.");
}
sum = 0;
avg = 0;
printf("\n");
}

	return 0;
}