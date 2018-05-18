#include <stdio.h>
#include <string.h>
void abbreviate(char *str);
void abbreviate(char *str) {

}

int main() {
	char str[100];
	char ab[20];
	long n;
	int f=0, k=0;
	printf("Enter the sentence:\n");
	scanf("%100[^\n]",str);

	n= strlen(str);
	//printf("%ld\n",n); 

	for (int i = 0; i < n; ++i)
	{
		for (int j = 65; j < 91; ++j)
		{
			if (str[i] == j)
			{
				f++;
				if (f == 1)
				{
					k = i;
				}
				if (f == 2)
				{
					printf("The abbreviation is:");
					printf("%c%c",str[k],str[i]);
				}
				if (f > 2)
				{
					printf("%c",str[i]);
				}
				
			}
		}
	}

	if (f == 1 || f ==0)
	{
		printf("Sorry! Cannot abbreviate the sentence\n");
		return 0;
	}



}