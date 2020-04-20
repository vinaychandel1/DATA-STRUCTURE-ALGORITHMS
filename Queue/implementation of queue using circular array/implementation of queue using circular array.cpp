#include<stdio.h>
#define MAX 5
int q[MAX];
int front = 0;
int rear = -1;
int itemcount = 0;



int enqueue(int data){
	if(itemcount==MAX){
	printf("Q IS FULL");
	}
	else if(rear == MAX-1)
	{
 rear = -1;
 } 
	else
	q[++rear] = data;
 itemcount++;
	
}

int dequeue(){

 
 	 int data = q[front++];
 if(front == MAX){
 front = 0;
 }
itemcount--;
 return data;
}


int main(){
	int item;
	char ch;
	int i;
	do{
		printf("Enter the item ");
		scanf("%d",&item);
		enqueue(item);
		fflush(stdin);
		printf("Do you want to enter item again Y/N?");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
	while(itemcount!=0){
	
	int data=dequeue();
	printf("%d ",data);
}
	return 0;
}
