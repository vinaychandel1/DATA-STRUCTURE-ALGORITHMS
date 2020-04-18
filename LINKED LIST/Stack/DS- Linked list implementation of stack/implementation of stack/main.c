#include<stdio.h>


typedef struct node{
	int data;
	struct node *link;
}node;

struct node *head;


void push(int item){
	struct node *p;


	p=(node*)malloc(sizeof(node));
	if(p==NULL){
		printf("Error of malloc");
		return ;
	}
	p->data=item;
	p->link=head;
	head=p;
}
int pop(){
    node *p;
    if(head==NULL){
        printf("UNDERFLOW");
        return -1;
    }
    printf("\nPOP:\n");
    p=head;
    head=head->link;
    printf("%d is POPED\n",p->data);
    free(p);



}
void display(node *p){
    int i;
    node *t;
    t=p;
    printf("\nItems remaining in stack after pop:\n");
for(i=0;i<sizeof(p)+1;i++){
    printf("%d\n",t->data);
    t=t->link;
}
}
int main(){
	int n,i,item;
    head=(node*)malloc(sizeof(node));
	printf("Enter the number of items you want to push into the stack:");
	scanf("%d",&n);
	printf("Enter the %d items you want to push into the stack:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&item);
		push(item);
	}
	pop();
	display(head);
	return 0;
}
