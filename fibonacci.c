/*program to display fibonacci series till a no*/
#include<stdio.h>
int main(){
	int a,b,c,n;
	printf("enter a no");
	scanf("%d",&n);
	for(a=1,b=0,c=1;b<=n;){
		printf("%d\t",b);
		c=a+b;
		b=a;
		a=c;
		
	}
	//printf("%d",n);
	
}
