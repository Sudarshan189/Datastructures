#include <stdio.h>
#include <stdlib.h>

int back=0, front=0;
int *arr;

void Enqueue(int data) {
    arr[front++] = data;
    return;
}

int Dequeue() {
    int data;
    data = arr[back++];
    return data;
}

int main()
{

/*
n=8;
= n-5



*/


    int n,m;
   arr = (int *)malloc(100*sizeof(int));

   printf("Enter the size of the score card:\n");
   scanf("%d",&n);

   if (n <= 0 || n>100)
   {
       printf("Invalid score card size");
      return 0;
   }

   for (int i = 0; i < n; ++i)
   {
      printf("Enter the hurdle race score %d:\n",(i+1));
      scanf("%d",&m);
      Enqueue(m);
   }
   printf("Latest hurdle race scores are:");
   
   for (int i = 0; i < (n-5); ++i)
   {
    Dequeue();
     //printf("%d ",Dequeue());  
   }

   for (int i = 0; i < 5; ++i)
   {
     printf("%d ",Dequeue());  
   }




    return 0;
}