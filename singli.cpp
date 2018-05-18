#include <stdio.h>
#include <stdlib.h>

int *arr;

int main() {
int n, flag =0;
arr = (int *)malloc(100*sizeof(int));

// n
scanf("%d",&n);

if (n == 0)
{
	flag = 0;
	return 0;
	/* code */
}

for (int i = 0; i < n; i++)
{
	scanf("%d ",&arr[i]);

}

for (int i = 0; i < n; i++)
{
	if (arr[i] == arr[n-i-1])
	{
		flag = 1;
	} else {
		flag = 0;
	}
}

printf("%d",flag);







return 0;
}