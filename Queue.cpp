//Implementation queue data structure using arays
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void enque(int val) {
	if(rear==max_size-1) {
		printf("Queue is full\n");
	}
	else if(front ==-1&&rear==-1) {
		front++;
		rear++;
		queue[rear]=val;
	}
	else {
		queue[++rear] = val;
	}
}
int deque() {
	if(front==-1 && rear==-1) // No elements are there in queue(-1 means)
	{
		return -1;
	}
	else if(front==rear) {
		int de = queue[rear];
		rear=-1;
		front=-1;
		return de;
	}
	else {
		int de = queue[front];
		front++;
		return de;
	}
}
void display() {
	if(front==-1 && rear==-1) {
		printf("Queue is empty\n");
		return;
	}
	for(int i=front;i<=rear;i++) {
		printf("%d ",queue[i]);
	}
	printf("\n");
}

int main() {
	printf("Enter max of the size of queue: ");
	scanf("%d",&max_size);
	int choice;
	while(1) {
		printf("Enter\n1.Enque\n2.Deque\n3.Display any other: ");
		scanf("%d",&choice);
		if(choice==1) {
			int val;
			printf("Enter value: ");
			scanf("%d",&val);
			enque(val); //Fxn call
			//ENque()
		}
		else if(choice==2) {
			int res= deque();
			if(res==-1) {
				printf("Queue is empty\n");
			}
			else {
				printf("%d is deleted\n",res);
			}
		}
		else if(choice==3){
			display();
			//Display
		}
		else {
			printf(":)");
		}
	}
}
