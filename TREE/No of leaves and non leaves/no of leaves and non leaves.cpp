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


//return no. of leaf
int NL(struct Node* t){
	if(t)
		if(t==NULL) return 0;
		else if(t->left==NULL&&t->right==NULL) return 1;
		else return(NL(t->left)+NL(t->right));
		return 0;
	
}
//return no. of non leaf
int NNL(struct Node* t){
	if(t)
		if(t==NULL) return 0;
		else if(t->left==NULL&&t->right==NULL) return 0;
		else return(1+NNL(t->left)+NNL(t->right));
		return 0;
	
}
   
int main(void) 
{ 
    
      
    struct Node *root = newNode(2); 
    root->left     = newNode(7); 
    root->right     = newNode(5); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(1); 
    root->left->right->right = newNode(11); 
    root->right->right = newNode(9); 
    root->right->right->left = newNode(4); 
      
  printf("NO OF LEAVES:%d\n",NL(root)); //number of leaf node
  printf("NO OF NON LEAVES:%d",NNL(root));//Number of non leaf
      
    return 0; 
} 
