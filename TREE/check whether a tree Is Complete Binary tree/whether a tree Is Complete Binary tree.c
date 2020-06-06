#include <stdio.h>
#include<stdlib.h>
  
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
};

struct Node* newNode(int data) 
{ 
    struct Node* node = (Node*)malloc(sizeof(Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 


int iscomplete(struct Node* t){
	if(t==NULL){
		 return 1;
	}
	if((!(t->left))&&(!(t->right))) return 1;
	else if(t->left&&t->right)
	return(iscomplete(t->left)&&iscomplete(t->right));
	else return 0;
}
int main(void) 
{ 
    
      //first test:
   /* struct Node *root = newNode(20); 
    root->left     = newNode(15); 
    root->right     = newNode(25); 
    root->left->right = newNode(10); 
    root->left->right = newNode(17); 
    root->left->right->left = newNode(16); 
    root->left->right->right = newNode(18); 
    root->left->left=newNode(10);
    root->left->left->left=newNode(2);
    root->right->right = newNode(40); 
    root->right->right->right = newNode(60); */
    
    
     //second test: 
    struct Node *root = newNode(20); 
    root->left=newNode(30);
    root->right=newNode(40);
    
	printf("Let 1=YES,0=NO");
    printf("\nIs Complete Binary tree:%d\n",iscomplete(root)); 
      
    return 0; 
} 
