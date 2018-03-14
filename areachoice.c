#include<stdio.h>
#include<math.h>
int main(){
	int a,r,b;
	printf("enter 1 to compute area of rectangle 2 to compute area of circle");
	scanf("%d",&a);
	switch(a){case 1:printf("enter l and b");
	scanf("%d%d",&r,&b);
	printf("the area is %d",r*b);
	break;
	case 2:printf("enter radius");
	scanf("%d",&r);
	printf("the area is %.3f",3.1416*pow(r,2));
	break;
	default:printf("wrong output");
	}
}
