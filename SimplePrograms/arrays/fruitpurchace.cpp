#include <stdio.h>

int main() {
	int arr[3],brr[3],crr[3];
	int count = 3;
	 int me =0;
     int fre=0;

printf("Enter the no of kgs of apple,orange and grapes bought by you\n");
for (int i = 0; i < count; ++i)
{
	/* code */
	scanf("%d", &arr[i]);
}

for (int i = 0; i < count; ++i)
{
	/* code */
	if (arr[i] < 0)
	{
		/* code */
		printf("Invalid Input\n");
		return 0;

	}
	
}






printf("Enter the no of kgs of apple,orange and grapes bought by your friend\n");
for (int i = 0; i < count; ++i)
{
	/* code */
	scanf("%d", &brr[i]);
}


for (int i = 0; i < count; ++i)
{
	/* code */
	if (brr[i] < 0)
	{
		/* code */
		printf("Invalid Input\n");
		return 0;

	}
	
}



printf("Enter the price of apple,orange and grapes per kg\n");
for (int i = 0; i < count; ++i)
{
	/* code */
	scanf("%d", &crr[i]);
}

for (int i = 0; i < count; ++i)
{
	/* code */
	if (crr[i] < 0)
	{
		/* code */
		printf("Invalid Input\n");
		return 0;

	}
	
}


for (int i = 0; i < count; ++i)
{
	/* code */
    
     me = me + (arr[i]*crr[i]);
     fre = fre + (brr[i]*crr[i]);

	
}


printf("So, You need Rs. %d, and your friend needs Rs. %d.\n",me,fre);





	return 0;
}										