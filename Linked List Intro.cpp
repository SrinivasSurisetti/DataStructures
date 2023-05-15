#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
int main() {
	//CRETE A NODE
	int *node1 = (int *) malloc(n*sizeof(int));
	NODE *node2 = (NODE *) malloc(sizeof(NODE));
	NODE *node3 = (NODE *) malloc(sizeof(NODE));
	node1-> data = 10;
	node2-> data = 20;
	node3-> data = 30;
	//printf("%d%d%d",node1->data,node2->data,node->data);
	//Linked nodes together
	node1 -> next = node2; //Linking node 1 and node
	node2 -> next = node3;
	node3 -> next = NULL; //
	printf("%d",node1->data);//data in node1
	printf("%d",node2->next);//data in node2
	printf("%d",node1->next->next->data); //data in node3
	
}
