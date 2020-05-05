#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int data;
struct Node*next;
}Node;


Node *head;

void create(int n){
Node *p;
int i;
printf("\nEnter The Data:");
head=(Node*)malloc(sizeof(Node));
head->next=NULL;
scanf("%d",&head->data);
p=head;
for(i=1;i<n;i++){
	printf("\nEnter The Data:");
  p->next=(Node*)malloc(sizeof(Node));
  p=p->next;
  scanf("%d",&p->data);
  p->next=NULL;
}
}

void display(Node *p){
  while(p!=NULL){
    printf("\nData=%d,Address=%d->",p->data,&p->data);
    p=p->next;
  }
  printf("NULL");
}


void Reverse(){

  Node *current,*prev,*next;
  current=head;
  prev=NULL;
  while(current!=NULL){
    next=current->next;   
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
}

int main(){
  int n;
  Node* start;
printf("Enter the number of nodes to create linked List:");
scanf("%d",&n);
create(n);
printf("\nList before Reverse:");
display(head);
printf("\n\nList After Reverse:");
Reverse();
display(head);

  return 0;
}
