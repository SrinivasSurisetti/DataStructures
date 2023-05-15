#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node NODE;
void display(NODE *head) {
	//Implement dispay here
	NODE* temp = head;
	while (temp!=NULL) {
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}
int main() {
	//CRETE A NODE
	NODE *node1 = (NODE *) malloc(sizeof(NODE));
	NODE *node2 = (NODE *) malloc(sizeof(NODE));
	NODE *node3 = (NODE *) malloc(sizeof(NODE));
	NODE *node4 = (NODE *) malloc(sizeof(NODE));
	NODE *node5 = (NODE *) malloc(sizeof(NODE));
	NODE *node6 = (NODE *) malloc(sizeof(NODE));
	node1-> data = 10;
	node2-> data = 20;
	node3-> data = 30;
	node4-> data = 40;
	node5-> data = 50;
	node6-> data = 60;
	//Linked nodes together
	node1 -> next = node2; //Linking node1 and node2
	node2 -> next = node3; //Linking node2 and node3
	node3 -> next = node4; //Linking node3 and node4
	node4 -> next = node5; //Linking node4 and node5
	node5 -> next = node6; //Linking node5 and node6
	node6 -> next = NULL; //Linking node3 and null
	//
	NODE *head = node1;
	//
	display(head);
}
