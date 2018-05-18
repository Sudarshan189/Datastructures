#include <stdio.h>
#include <string.h>

int main() {

char str[20][100];

int i = 0,n,t;

printf("Enter the total number of brands\n");
scanf("%d",&n);

printf("Enter the fast moving brands of the day one by one\n");
	
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%20[^\n]",str[i]);
	}

	printf("How many times the list has to display?\n");
	

scanf("%d",&t);

for (int i = 0; i < t; ++i)
{
	printf("*******************************\n");

	for (int i = 0; i < n; ++i)
	{
		printf("%s\n",str[i]);
		/* code */
	}
	printf("*******************************\n");
	/* code */
}

	
	



return 0;

}