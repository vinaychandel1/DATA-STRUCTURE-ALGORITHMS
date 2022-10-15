//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
inline int length(Node *p){
    int l=0;
    while(p){
     l+=1;
     p=p->next;
     }
     return l;
}
//Function to find intersection point in Y shaped Linked Lists.
inline int intersectPoint(Node* head1, Node* head2)
{
    Node *A=head1,*B=head2;
    int n=length(head1);
    int m=length(head2);
    int d=(n>m)?n-m:m-n;
    if(n>m){
        for(int i=0;i<d;i++){
            A=A->next;
        }
    }
        else{
           for(int i=0;i<d;i++){
            B=B->next;
        } 
        }
        while(A!=NULL && B!=NULL){
            if(A==B) return A->data;
         A=A->next;
         B=B->next;
        }
        return NULL;
}

//https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
