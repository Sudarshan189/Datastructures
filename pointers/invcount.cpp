#include <stdio.h>
#include <stdlib.h>

int inversioncount(int *,int);


int inversioncount(int *arr, int n)
{
  int inv_count = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i+1; j < n; j++)
      if (arr[i] > arr[j])
        inv_count++;
 
  return inv_count;
}

int main() {
	int *arr;
	int n;

	printf("Enter the number of elements in the array\n");
	scanf("%d", &n);
	if (n<= 0 || n > 20)
	{
		printf("Invalid Size\n");
		return 0;
		/* code */
	}

	arr = (int *)malloc(n*sizeof(int));

	printf("Enter the elements in the array\n");
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d",&arr[i]);
	}
	int data = inversioncount(arr,n);
	printf("The inversion count of the array is %d\n",data);



}