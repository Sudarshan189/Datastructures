#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int countVowels(char *s);
int main() {
	char str[100];
	int v=0, c=0;
	printf("Enter the word :\n");
	scanf("%s",str);

	//str = (char *)malloc(20*sizeof(char));
	for (int i = 0; i < strlen(str); ++i)
	{
		//printf("%ld\n",strlen(str));
		switch(str[i]) {
			case 'a':
					v++;
					//printf("a %d\n",v);
					break;
			case 'e':
					v++;
					//printf("e %d\n",v);
					break;
			case 'i':
					v++;
					//printf("i %d\n",v);
					break;
			case 'o':
					v++;
					//printf("o %d\n",v);
					break;
			case 'u':
					v++;
				//	printf("u %d\n",v);
					break;
			case 'A':
					v++;
				//	printf("A %d\n",v);
					break;
			case 'E':
					v++;
				//	printf("E %d\n",v);
					break;
			case 'I':
					v++;
				//	printf("I %d\n",v);
					break;
			case 'O':
					v++;
				//	printf("O %d\n",v);
					break;
			case 'U':
					v++;
				//	printf("U %d\n",v);
					break;
			default: 
					c++;
		}			
	}
	printf("No of vowels : %d\n",v);



}