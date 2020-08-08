#include <stdio.h>

int main() {
int n;
long int arr[20];

printf("Enter the number that needs to be long pressed :\n");
scanf("%d",&n);
if (n != 5)
{
	/* code */
	printf("Invalid input\n");
	return 0;
}
printf("Enter the emergency phone numbers:\n");
for (int i = 0; i < n; ++i)
{
	/* code */
	scanf("%ld",&arr[i]);
}
printf("In Case of Emergency (ICE), notify\n");
for (int i = 0; i < n; ++i)
{
	/* code */
	printf("+91 %ld", arr[i]);
}


}