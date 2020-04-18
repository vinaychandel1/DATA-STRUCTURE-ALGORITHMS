#include<stdio.h>

int MAXSIZE=9;

int stack[8];
int top=-1;


bool isfull(){
	
	if(top==MAXSIZE){
		return true;
	}
	else
	 return false;
}



int push(int data){
	if(!isfull()){
		
		top=top+1;
		stack[top]=data;
		
	}
	else{
		printf("Could not insert data stack is full");
		
	}
	
	
}

int peek(){
	return stack[top];
}
isempty(){
	if(top==-1)
	return -1;
	else
	return 0;
}

int pop(){
	
	int data;
	if(!isempty()){
		data=stack[top];
		top=top-1;
		return data;
	}
	else{
		printf("Could not retrieve data");
	}
}





int main(){
	
	push(3);
	push(6);
	push(7);
	push(9);
	push(12);
	
	printf("Top of the stack is:%d\n",peek());
	printf("ELEMENTS ARE:\n");
	while(!isempty()){
		int data=pop();
		printf("%d\n",data);
		
	}
	
	
	
	
	return 0;
}
