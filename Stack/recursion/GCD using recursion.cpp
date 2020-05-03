#include<stdio.h>

int gcd(int num1,int num2){
	if(num2==0){
		return num1;
	}
	else
		gcd(num2,num1%num2);
	
	
}

int main(){
	int num1, num2,result;
	printf("ENTER THE 1st NUMBER: ");
	scanf("%d",&num1);
	printf("ENTER THE 2nd NUMBER: ");
	scanf("%d",&num2);
	result=gcd(num1,num2);
	printf("GCD OF %d %d :%d",num1,num2,result);
	
	return 0;
}
