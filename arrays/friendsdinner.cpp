#include <stdio.h>

int main() {
int count;
int arr[50];
int brr[5];
int sum=0,j=0;

printf("Enter the no of dishes\n");
scanf("%d",&count);

printf("Enter the cost of dishes\n");
for (int i = 0; i < (count*5); ++i)
{
	/* code */
	scanf("%d",&arr[i]);

}


for (int i = 0; i < (count*5); ++i)
{
	sum = sum + arr[i];
	/* code */
	if ((i+1)%count == 0)
	{
		brr[j] = sum;
		sum = 0;
		j++;
		/* code */
	}

}

printf("The Bill amount of each as follows\n");
printf("Ace : Rs.%d\nAbe : Rs.%d\nAnn : Rs.%d\nAcy : Rs.%d\nAra : Rs.%d\n",brr[0],brr[1],brr[2],brr[3],brr[4]);






	return 0;
}