/*program to compute factorial iteratively using for loop*/
#include<stdio.h>
int main(){
	int n,i;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;n;n--)
	i*=n;
	printf("factorial = %d",i);
	}
