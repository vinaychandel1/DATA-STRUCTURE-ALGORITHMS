#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;

}node;


node* create(int n){
    node*head,*p;
    head=(node*)malloc(sizeof(node));
    head->link=NULL;
    scanf("%d",&head->data);
    p=head;
    while(n!=1){
        p->link=(node*)malloc(sizeof(node));
        p=p->link;
        scanf("%d",&p->data);
        p->link=NULL;
        n--;
    }
    return(head);

}

void display(node *t){
while(t!=NULL){
    printf("%d->",t->data);
    t=t->link;
}
printf("NULL");
}

int main()
{
    node *start;
    int n;
    start=NULL;
    printf("Enter the total number of nodes:");
    scanf("%d",&n);
    printf("Enter the elements in linked list:");
    start=create(n);
    display(start);
    return 0;
}
