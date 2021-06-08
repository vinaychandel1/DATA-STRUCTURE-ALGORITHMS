#include <bits/stdc++.h> 
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};
void LevelOrder(Node *root){
	if(root==NULL) return;
	queue<Node*>Q;
	Q.push(root);
	while(!Q.empty()){
		Node* current=Q.front();
		cout<<current->data<<", ";
		if(current->left!=NULL) Q.push(current->left);
		if(current->right!=NULL) Q.push(current->right);
		Q.pop();//removing the element at front
	}

}


int main()
{
	struct Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	LevelOrder(root);
	 return 0;
}

