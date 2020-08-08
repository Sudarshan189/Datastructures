#include <stdio.h>
#include <string.h>


int main() {
int n,x;
char str[100][100];
 FILE *fptr, *ptr_file;




printf("Enter the total number of brands\n");
scanf("%d",&n);

printf("Enter the fast moving brands of the day one by one\n");
for (int i = 0; i < n; i++)
{
	// scanf("%s[^\n]",str[i]);
	// gets(str[i]);
	scanf("%s[^\n]",str[i]);
}

// for (int i = 0; i < n; i++)
// {
// 	// scanf("%s[^\n]",str[i]);
// 	puts(str[i]);
// }
printf("How many times the list has to display?\n");
scanf("%d",&x);

/*  open for writing */
    fptr = fopen("fastmove.txt", "w+");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    fprintf(fptr, "*******************************\n");

// printf("*******************************\n");

for (int j = 0; j < x; j++)
{
	/* code */

	for (int i = 0; i < n; i++)
	{
		// fputs(str[i], fptr);
		 fprintf(fptr,"%s\n", str[i]);
		//printf("%s\n",str[i]);
	}
	 fprintf(fptr, "*******************************\n");
//printf("*******************************\n");
}
fclose(fptr);
    		char buf[10000];

    		ptr_file =fopen("fastmove.txt","r");
    		if (!ptr_file){
    			 printf("Error\n");
        		return 0;

        	}
        	// printf("illi idini\n");

    		while (fgets(buf,10000, ptr_file)!=NULL)
        		printf("%s",buf);

		fclose(ptr_file);


//fprintf(fptr, "*******************************\n");

//  printf("*******************************\n");

// for (int j = 0; j < x; j++)
// {
// 	/* code */

// 	for (int i = 0; i < n; i++)
// 	{
// 		//fprintf(fptr,"%s\n", str[i]);
// 		printf("%s\n",str[i]);
// 	}
// 	 //fprintf(fptr, "*******************************\n");
// printf("*******************************\n");
// }

// printf("Pizza\n");
// printf("Burger\n");
// printf("Sandwitch\n");
// printf("HotDogs\n");
// printf("Donuts\n");


return 0;

}


