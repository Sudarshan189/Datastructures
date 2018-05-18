#include <stdio.h>

int main() {
    int arr[10];
    int i;
    for(i=0; i<10; i++) {
        arr[i]=0;
    }
    int N, M;
    printf("Enter any number:");
    scanf("%d", &N);
    M = N;
    while (N>0) {
        int x = N%10;
        arr[x]++;
        N = N/10;
    }
    printf("Frequency of each digit in %d is:", M);
    for(i=0; i<10; i++) {
        printf("Frequency of %d = %d\n", i, arr[i]);
    }
}
