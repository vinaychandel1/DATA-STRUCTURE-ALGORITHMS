#include<stdio.h>

long factorial(int n){
if (n ==0)
return 1;
 else
 return n*factorial(n-1);
}
int main(){
	long int num,result;
	printf("Enter the number to find the Factorial:");
	scanf("%d",&num);
	result=factorial(num);
	printf("The Factorial is :%ld",result);
	return 0;
}
