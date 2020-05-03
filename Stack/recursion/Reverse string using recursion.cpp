#include<stdio.h>
#include<string.h>

void reverse(char *s,int left,int right){
	if (left >= right) return;
    char tmp = s[left];
    s[left++] = s[right];
    s[right--] = tmp;
    reverse(s, left, right);
  }
	


int main(){
	char s[20];
	int i;
	printf("Enter the string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
	}
	printf("length of string id:%d",i);
     reverse(s,0,i-1);
     printf("\n Reverse of string is:%s",s);
	return 0;
}
