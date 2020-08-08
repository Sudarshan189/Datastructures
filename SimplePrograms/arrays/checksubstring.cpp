#include <stdio.h>

int sub_string(char *source, int from, int n, char *target);	

	int sub_string(char *source, int from, int n, char *target)	 {


		return 0;
		
	}

int main() {

char str[100], tar[100];
int index, num;
int len, i=0;

printf("Enter any string: \n");
scanf("%40[^\n]",str);

printf("Enter from index (count from 0):\n");
scanf("%d", &index);

printf("Enter number of characters: \n");
scanf("%d",&num);

while(str[i] != '\0') {
	len++;
	i++;
}

if (index <= 0)
{
	printf("Starting index is invalid.\n");
	return 0;
	/* code */
}


if (index > len)
{
	printf("Starting index is invalid.\n");
	return 0;
}


if (num <= 0)
{
	/* code */
	printf("Invalid number of characters.\n");
	return 0;
}






printf("Substring is:");
for (int i = index; i < (index+num); ++i)
{
	tar[i-index] = str[i];
}
printf("%s\n",tar);









}