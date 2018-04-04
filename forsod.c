/*program to compute sum of digits using for loop*/
#include<stdio.h>
int main(){
	int i,s;
	printf("enter a no");
	scanf("%d",&i);
	for(s=0;i;i/=10)
{//printf("%d",i);
	s+=i%10;
}	printf("%d",s);}
