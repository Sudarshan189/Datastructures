#include <stdio.h>
#include <stdlib.h>
 
//void reverse(char [], int, int);
int main()
{ 
    int *arr = (int *)malloc(100*sizeof(int));
    // char str1[20];
    int size;
    printf("Enter length of List:\n");
    scanf("%d", &size);

    if(size <= 0) {
        printf("Invalid Length\n");
        return 0;
    }
 
    printf("Elements in Stack\n");
    for (int i = 0; i < size; i++)
    {
     scanf("%d ", &arr[i]);   
    }
    printf("Elements in the stack after reversal\n");
    for (int i = size-1; i >= 0; i--)
    {   
     printf("%d ",arr[i]);
    }
   
    return 0;
}
 