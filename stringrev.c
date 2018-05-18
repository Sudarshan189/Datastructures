#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *newname;
char* reverse(char *data, int a, int b) {
	
	newname[b]= data[a];
	if(a == 0) {
		return newname;
	}	 
	return reverse(data, --a, ++b);

	
//return newname;
}

int main() {

newname= (char *)malloc(20*sizeof(char));
char *name, *chan, *myname;
name= (char *)malloc(20*sizeof(char));
printf("Enter the string: ");
scanf("%s", name);
//printf("%s\n",name);

int h = strlen(name);  // excludes \0
//printf("%d\n", h);
myname = reverse(name, (h-1), 0);

printf("Reversed string is:%s",myname);




}

