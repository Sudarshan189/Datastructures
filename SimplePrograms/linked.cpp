#include <iostream>

struct node
{
	int data;
	node* next;
};

class linkedlist
{
	node* link;
	node* head;
public:
	linkedlist() {
		head->next = NULL;
	}

	void insertnodeathead(int data) {
		link = new node;
		link->next = head;
		link->data = data;
		head = link;
		delete link;
	}

	
	int showheaddata() {
		return head->data;
	}  
	

	
};

int main() {
	linkedlist l;
	l.insertnodeathead(5);
	l.insertnodeathead(80);

	// l.traversdata();

 std::cout << l.showheaddata();
}