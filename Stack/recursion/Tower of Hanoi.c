#include<stdio.h>
#include<math.h>


void TOH(int n,char x,char y,char z){
	if(n>0){
		TOH(n-1,x,z,y);
		printf("%c TO %c\n",x,y);
		TOH(n-1,z,y,x);
		
		
	}
}

int main(){
	int n=4;
	TOH(n,'A','B','C');
	int invocation=pow(2,n+1)-1;
    int	movement=pow(2,n)-1;
	printf("No of invocations:%d\n",invocation);
	printf("No of movements:%d",movement);
	
	return 0;
}
