#include<stdio.h>
int main(){
	int a,b;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
	switch(a<b){
		case 0:printf("%d is greater than %d",a,b);
		break;
		case 1:printf("%d is greater than %d",b,a);
		break;
	}
}
