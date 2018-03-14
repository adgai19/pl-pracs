
/*
wap to accept l n b and find a and p of rectangle
done on 1-2-18*/
#include<stdio.h>
int main(){
	float a,b,area,peri;
	printf("enter l and b");
		scanf("%f%f",&a,&b);
		area=a*b;
		peri=2*(a+b);
		printf("area is %f\n",area);
		printf("perimeter is %f",peri);}
