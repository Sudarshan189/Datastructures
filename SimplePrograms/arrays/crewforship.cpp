#include <stdio.h>
#include <stdlib.h>
 int main()
{
	int n,i,j;
	int *arr;
	int *brr;
	scanf("%d",&n);

	if (n<=0)
	{
		/* code */
		printf("Provide a valid number\n");
		return 0;
	}
	arr = (int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	A:  brr=(int *)malloc((n/2)*sizeof(int));
	for (int i = 0; i < n; i=i+2)
	{
			/* code */
			brr[(i/2)] = arr[i+1];
			
	}
	//int *brr =(int *)malloc((n*sizeof(int));
	n = n/2;
	// printf("n = %d\n",n);
	arr = (int *)malloc(n*sizeof(int));
	 for (int i = 0; i < n; i=i+1)
	  {
	 	arr[i] = brr[i];
	  }

	  // for (int i = 0; i < n; i=i+1)
	  // {
	 	//  printf("--> %d\t",arr[i]);
	  // }
	  if (n == 1)
	{
		for (int i = 0; i < n; i=i+1)
	  {
	 	 printf("%d\n",arr[i]);
	  }
		return 0;
	}
	  goto A;

	  

	  // printf("%d\n", arr[i]);

	// A: int *crr =(int *)malloc((n/2)*sizeof(int));

	// for (int i = 0; i < n; i=i+2)
	// {
	// 	crr[(2*i)] = brr[i+1];	
	// }

	// for (int i = 0; i < n; i=i+1)
	// {
	// 	brr[i] = crr[i];	
	// }

	// for (int i = 0; i < n; i=i+1)
	// {
	// 	printf("--> %d\t",brr[i]);
	// }
	// goto A;


	

	
	/* code */
	return 0;
}