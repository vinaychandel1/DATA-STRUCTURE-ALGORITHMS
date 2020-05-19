#include <stdio.h>
#include<stdlib.h>
using namespace std; 
  
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
int getfullCount(struct Node* t){
	if(t){
		int l=0,r=0;
		l=getfullCount(t->left);
		r=getfullCount(t->right);
		return (1+l+r);
	}
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
      
  printf("%d",getfullCount(root)); 
      
    return 0; 
} 
