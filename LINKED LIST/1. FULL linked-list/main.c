#include <stdio.h>
#include <stdlib.h>
typedef struct node{
int info;
struct node *next;
}node;

node *start;

node * create(int n){
node * head,*p;
int i;
head=(node *)malloc(sizeof(node));
printf("ENTER THE INFO IN THE first NODE:");
head->next=NULL;
scanf("%d",&head->info);
p=head;
for(i=1;i<n;i++){
    p->next=(node *)malloc(sizeof(node));
    p=p->next;
    printf("ENTER THE INFO IN THE NODE:");
    scanf("%d",&p->info);
    p->next=NULL;
}
return(head);
}

void display(node *p){
    printf("DIPLAYING THE LINKED LIST:");
    printf("DATA\tADDRESS\n");
while(p!=NULL){
    printf("%d\t%d\n",p->info,&p->info);
    p=p->next;
}
printf("NULL");
}

void insertbeg(){
node *p;
p=(node*)malloc(sizeof(node));
printf("ENTER THE DATA TO INSERT NODE IN BEGNNING:");
scanf("%d",&p->info);
p->next=start;
start=p;
}

void insertbetween(int data,node *loc){
node *p;
p=(node*)malloc(sizeof(node));
p->info=data;
p->next=loc->next;
loc->next=p;
}

void insertend(){
node *p,*q;
q=start;
p=(node*)malloc(sizeof(node));
printf("ENTER THE DATA TO INSERT AT END:");
scanf("%d",&p->info);
p->next=NULL;
while(q->next!=NULL){
    q=q->next;
}
q->next=p;
}

void deletebeg(){
node *p,*q;
q=start;
if(start==NULL){
    printf("UNDERFLOW");
}
else
start=start->next;
free(q);
}

void deletebetween(){
node *p,*q;
printf("ENTER THE LOCATION TO DELETE:");
scanf("%d",&p);
printf("ENTER THE previous LOCATION TO DELETE:");
scanf("%d",&q);
q->next=p->next;
}

void deleteend(){
    node *p,*q;
    p=start;
    while(p->next!=NULL){
            q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);


}


int main()
{
    char ch;
    int n,loc,data;
    do{
    printf("\nWHAT YOU WANT?\n");
    printf("\n1. CREATE LIST:\n");
    printf("2. INSERT AT BEGNNING:\n");
    printf("3. INSERT BETWEEN NODES:\n");
    printf("4. INSERT NODE AT END:\n");
    printf("5. DELETE AT BEGNNING:\n");
    printf("6. DELETE BETWEEN THE NODES:\n");
    printf("7. DELETE AT THE END:\n");
    printf("8. DISPLAY THE LIST:\n");
    printf("ENTER YOUR CHOICE:");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
case '1':
    printf("\nENTER THE NUMBER OF NODES:");
    scanf("%d",&n);
    start=create(n);
    break;
    case '2':
    insertbeg();
    break;
    case '3':
        printf("\nENTER THE LOCATION WHERE YOU WANT TO ENTER A NODE:");
        scanf("%d",&loc);
        printf("ENTER THE DATA TO INSERT BETWEEN THE NODES:");
scanf("%d",&data);
    insertbetween(data,loc);
    break;
    case '4':
    insertend();
    break;
    case '5':
        deletebeg();
        break;
        case '6':
        deletebetween();
        break;
        case '7':
        deleteend();
        break;
    case '8':
    display(start);
    break;
    default:

        printf("INVALID CHOICE");
        break;
    }
     } while(ch!='0');
    return 0;
}

