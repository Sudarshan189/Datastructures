#include <stdio.h>
 
 int main() {
 	int count;
 	float arr[12];


 	printf("Enter the no of racers:\n");
 	scanf("%d",&count);
 	if (count > 10)
 	{
 		/* code */
 		printf("Sorry! Only 10 racers can participate.\n");
 		return 0;
 	}

 	printf("Enter the seconds:\n");
 	for (int i = 0; i < count; ++i)
 	{
 		/* code */
 		scanf("%f",&arr[i]);
 	}


 	for (int i = 0; i < count-1; ++i)
 	{
 		for (int j = 0; j < count-i-1; ++j)
 		{
 			/* code */
 			if (arr[j] > arr[j+1])
 			{
 				/* code */
 				float temp = arr[j];
 				arr[j] = arr[j+1];
 				arr[j+1] = temp;
 			}
 		}
 		/* code */
 	}

 	printf("I prize:\n%.2f\n",arr[0]);
 	printf("II prize:\n%.2f\n",arr[1]);
 	printf("III prize:\n%.2f\n",arr[2]);




 } 