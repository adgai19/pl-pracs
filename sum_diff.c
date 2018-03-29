/*
wap to accept 2 nos from user and stimulate calaculator
done on 1-2-2018*/
#include<stdio.h>
int main(){
	int a,b;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
	printf("%d+%d is %d\n",a,b,a+b);
	printf("%d-%d is %d\n",a,b,a-b);
	printf("%d*%d is %d\n",a,b,a*b);
	printf("%d/%d is %d\n",a,b,a/b);
	printf("%d%%%d is %d\n",a,b,a%b);
}
