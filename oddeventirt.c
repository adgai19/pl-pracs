/*program to display if a no is odd or even using tertiary operator*/
#include<stdio.h>
int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	!(a%2)?printf("%d is even",a):printf("%d is odd",a);
}
