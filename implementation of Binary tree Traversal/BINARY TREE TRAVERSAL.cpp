#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int value;
	struct Node *left,*right;
}Node;

Node *init_tree(int data){
	// Creates the tree and returns the
    // root node
	Node *root=(Node*)malloc(sizeof(Node));
	root->left=root->right=NULL;
	root->value=data;
	return root;
}
Node* create_node(int data) {
    // Creates a new node
    Node* node = (Node*) malloc (sizeof(Node));
    node->value = data;
    node->left = node->right = NULL;
    return node;
}
int print_tree(int traversal, Node* root) {
    // Prints the tree according to
    // various types of traversals
    if (!root)
        return NULL;
    switch(traversal) {
        case (1):
            // Do a Preorder Traversal
            printf("%d -> ", root->value);
            print_tree(traversal, root->left);
            print_tree(traversal, root->right);
            break;

        case (2):
            // Do an Inorder Traversal
            print_tree(traversal, root->left);
            printf("%d -> ", root->value);
            print_tree(traversal, root->right);
            break;

        case (3):
            // Do a postorder Traversal
            print_tree(traversal, root->left);
            print_tree(traversal, root->right);
            printf("%d -> ", root->value);
            break;
    }
}

int main(){
	Node* root =init_tree(10);
	 // Insert nodes onto the tree
    root->left = create_node(20);
    root->right = create_node(30);

    root->left->left = create_node(40);
    root->left->right = create_node(50);

    root->right->left = create_node(60);
    root->right->right = create_node(70);
    root->right->right->left = create_node(80);
    root->right->right->right = create_node(90);
    
    printf("****Preorder Traversal****\n");
    print_tree(1,root);
    printf("\n\n");
     printf("****Inorder Traversal:****\n");
    print_tree(2, root);
    printf("\n\n");

    printf("****Postorder Traversal:*****\n");
    print_tree(3, root);
    printf("\n\n");
	return 0;
}
