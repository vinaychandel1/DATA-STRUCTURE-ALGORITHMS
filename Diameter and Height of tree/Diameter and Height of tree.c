#include<iostream>
#include<algorithm>
using namespace std;
 typedef struct node{
 	int data;
 	struct node *left,*right;
 }node;
 
 int height(struct node* node) 
{ 
   /* base case tree is empty */ 
   if(node == NULL) 
       return 0; 
  
   /* If tree is not empty then height = 1 + max of left  
      height and right heights */    
   return 1 + max(height(node->left), height(node->right)); 
}  
int diameter(struct node * tree) 
{ 
   /* base case where tree is empty */
   if (tree == NULL) 
     return 0; 
  
  /* get the height of left and right sub-trees */
  int lheight = height(tree->left); 
  int rheight = height(tree->right); 
  
  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(tree->left); 
  int rdiameter = diameter(tree->right); 
  
  /* Return max of following three 
   1) Diameter of left subtree 
   2) Diameter of right subtree 
   3) Height of left subtree + height of right subtree + 1 */
  return max(lheight + rheight + 1, max(ldiameter, rdiameter)); 
}  
  
/* UTILITY FUNCTIONS TO TEST diameter() FUNCTION */
  
/*  The function Compute the "height" of a tree. Height is the  
    number f nodes along the longest path from the root node  
    down to the farthest leaf node.*/

  
node *newNode(int data){
	
	node* node = (struct node*) 
                       malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

int main(){
	node * root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->left->left=newNode(5);
	root->left->right=newNode(4);
	printf("Height of the given tree is %d\n", height(root)-1); 
	printf("Diameter of the given tree is %d\n", diameter(root)); 

	
	
}
