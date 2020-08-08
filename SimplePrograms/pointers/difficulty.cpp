#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,x;
	int *arr;
	

	scanf("%d %d",&n,&x);
	if (n <= 0)
	{
		printf("Invalid Input\n");
		return 0;
	}

	arr = (int *)malloc(n*sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		scanf("%d ",&arr[i]);
		if (arr[i] <= 0)
		{
			printf("Invalid Input\n");

		return 0;
		}
	}
	int j=0;
	int f=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > x)
		{
			f++;
			// printf("f %d\n",f);
		} else {
			j++;
			//printf("arr %d\n",arr[i]);
		}
		if (f == 2)
		{
				break;
		}
	}
	printf("Maximum score Ram can achieve in the exam is:%d\n",j);





}