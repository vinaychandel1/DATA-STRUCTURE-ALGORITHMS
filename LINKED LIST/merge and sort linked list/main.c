#include <stdio.h>
#include <stdlib.h>


typedef struct node{
int data;
struct node * next;
}node;

struct node * start1;
struct node * start2;

node * create1(int n1){
    int i;

node * head1,*p1;
head1=(node*)malloc(sizeof(node));
printf("Enter the data:");
scanf("%d",&head1->data);
head1->next=NULL;
p1=head1;
for(i=1;i<n1;i++){
        p1->next=(node*)malloc(sizeof(node));
        p1=p1->next;
    printf("Enter the data:");
    scanf("%d",&p1->data);
    p1->next=NULL;
}
return head1;

}
node * create2(int n2){
int i;
node * head2,*p2;
head2=(node*)malloc(sizeof(node));
printf("Enter the data:");
scanf("%d",&head2->data);
head2->next=NULL;
p2=head2;
for(i=1;i<n2;i++){
        p2->next=(node*)malloc(sizeof(node));
        p2=p2->next;
    printf("Enter the data:");
    scanf("%d",&p2->data);
    p2->next=NULL;
}
return head2;
}
void display(node *p){
while(p!=NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL");
}
void combine( node *p){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=start2;

}
void *sort1(node *first){
    node * new1=first,*count;


    int temp;
for( ; new1->next != NULL; new1 = new1->next)
	{
		for(count = new1->next; count != NULL; count = count->next)
		{
			if(new1->data > count->data)
			{
				int temp = new1->data;
				new1->data = count->data;
				count->data = temp;
			}
		}
	}

}
int main()
{
    int n1,n2;
    start1=NULL;
    start2=NULL;
    printf("Enter the number of nodes of list1:");
    scanf("%d",&n1);
    printf("Enter the number of nodes of list2:");
    scanf("%d",&n2);
    printf("ENTER THE %d NODES OF FIRST LIST:\n",n1);
    start1=create1(n1);
    printf("ENTER THE %d NODES OF SECOND LIST:\n",n2);
    start2=create2(n2);
    printf("COMBINED LIST IS:");
    combine(start1);
    display(start1);

    sort1(start1);
    printf("\n");
    printf("THE SORTED LINKED LIST IS:\n");
    display(start1);
    return 0;
}
