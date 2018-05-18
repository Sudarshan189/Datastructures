#include <stdio.h>
#include <stdlib.h>
sdh
struct node
{
	int data;
	struct node *next;

};

struct node *tail, *head;

void createNode(struct node *a) {
	// linked list creation
a=(struct node *)malloc(sizeof(struct node));

// initialization
head = a;

// tail = a;
head->next = NULL;

tail = NULL;
// tail=a;
}



void addNodeatHead(struct node *a, int data) {   // O(1)
	 
		// printf("else%d", head->data);
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;
		temp->next = head;
		head = temp;
		// free(temp);
	

}


int main() {
	struct node *a;
	int num, j;
createNode(a);
scanf("%d",&num);

for(int i=0;i<num;i++) {
    scanf("%d ", &j);
    addNodeatHead(a, j);
}


// printf("%d", head->data);
// addNodeatHead(a, 7);
// printf("%d", head->data);
// addNodeatHead(a, 9);
// printf("%d", head->data);

if(head->data == head->next->next->data) {
	printf("1");
} else {
	printf("0");
}





	return 0;
}
