/*program to display table of a no using for loop*/#include<stdio.h>
int main(){
	int i,n;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	printf("%d*%d=%d\n",n,i,n*i);
}
