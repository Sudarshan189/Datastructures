#include <stdio.h>

int main() {
	char arr[31];
int i =0, len =0;
	scanf("%20[^\n]",arr);

	while(arr[i] != '\0') {
		len ++;
		i++;
	}


	if (len >= 20)
	{

		printf("Length of the String exceeds the limit.\n");
		return 0;
		/* code */
	}
for (i = 0; i < len; ++i)
{
	printf("%c\n",arr[i]);
	/* code */
}

	// printf("%d\n",len);


	return 0;
}