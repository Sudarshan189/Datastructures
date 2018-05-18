#include <stdio.h>
#include <stdlib.h>

int *arr;


int main()
{
	int n, key;
	arr = (int *)malloc(100*sizeof(int));


	// n
scanf("%d",&n);


for (int i = 0; i < n; i++)
{
	scanf("%d ",&arr[i]);

}


printf("Enter the element to be deleted:");

scanf("%d",&key);

printf("\nThe list after deletion: ");
for (int i = 0; i < n; i++)
{
	if (arr[i] == key)
	{
		
	} else {
		printf("%d ",arr[i]);
	}
	

}





	return 0;
}
