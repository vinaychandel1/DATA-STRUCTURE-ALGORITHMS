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

int findmin(struct Node* t){
	while(t->left){
		t=t->left;
	}
	return t->data;
}
int findmax(struct Node* t){
	while(t->right){
		t=t->right;
	}
	return t->data;
}


int main(void) 
{ 
    
      
    struct Node *root = newNode(20); 
    root->left     = newNode(15); 
    root->right     = newNode(25); 
    root->left->right = newNode(10); 
    root->left->right = newNode(17); 
    root->left->right->left = newNode(16); 
    root->left->right->right = newNode(18); 
    root->left->left=newNode(10);
    root->left->left->left=newNode(2);
    root->right->right = newNode(40); 
    root->right->right->right = newNode(60); 
      
  printf("Minimun element in BST is:%d\n",findmin(root)); 
  printf("Miximum element in BST is:%d\n",findmax(root)); 
      
    return 0; 
} 
