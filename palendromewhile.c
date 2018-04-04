/*program to check if a number is palendrome using while loop*/
#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("enter a no");
	scanf("%d",&n);
	i=n;
	while(n){
		s=s*10+n%10;
		n/=10;
	//	printf("%d",s);
	}
	if(s==i)
	printf("palendrome");
	else printf("not palendrome");
	}
