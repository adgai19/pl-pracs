/*program to code a calculter 
usage of simple if*/
#include<stdio.h>
int main(){
	float a,b;
	int c;
	printf("enter 2 nos");
	scanf("%f%f",&a,&b);
	printf("enter 1 for addition\t2 for subtraction\t3 for multiplication\t4 for division");
	scanf("%d",&c);
	if(c==1)
	printf("%.2f+%.2f=%.2f",a,b,a+b);
	if(c==2)
	printf("%.2f-%.2f=%.2f",a,b,a-b);
	if(c==3)
	printf("%.2f*%.2f=%.2f",a,b,a*b);
	if(c==4)
	printf("%.2f/%.2f=%.2f",a,b,a/b);
	printf("done");
	}
