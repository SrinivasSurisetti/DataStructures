#include<stdio.h>
char stack[100];
int top=-1,size;
void push(char ele) {
	if(top == size-1) {
		printf("Stack is full. Insertions are not Possible\n");
	}
	else {
		top++;
		stack[top]=ele;
		printf("%c is Inserted into Stack\n",ele);
	}
}
int pop() {
	if(top==-1) {
		return -1;
	}
	else {
		int rm = stack[top];
		top--;
		return rm;
	}
}
void peek() {
	if(top==-1){
		printf("Element at the top is: %c\n",stack[top]);
	}
}
void display() {
	if(top==-1) {
		printf("Stack is empty. No elements to Display\n");
	}
	else {
		int i,n;
		printf("Element in the Stack.are\n");
		for(i=0;i<n;i--) {
			printf("%c",stack[i]);
		}
		printf("\n");
	}
}
int main() {
	printf("Enter size of the stack: ");
	scanf("%d",&size);
	//Menu Driven Program
	int choice;
	while(1) {
		printf("Enter 1. Push 2. Pop 3. Peek 4. Display and any Other to Exit: ");
		scanf("%d",&choice);
		if(choice == 1) {
			char ele;
			printf("Enter an Element to Pushed into the stack:");
			scanf("%c",&ele);
			push(ele);
		//
	}
	//POP
		else if(choice == 2) {
			char removed_element = pop();
			if(removed_element == -1) {
				printf("Stack is Empty.Cannot delet the Element");
			}
			else {
				printf("Removed element is %c\n",removed_element);
			}
	}
	//PEEK
		else if(choice == 3){
			peek();
	}
		else if(choice == 4) {
			display();
		}
		else{
		printf("Poraa reh");
		break;
	}
}
}
