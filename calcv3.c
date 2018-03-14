/*program to code a calculator
usage of if else ladder and fflush
done on 8-2-2018*/
#include<stdio.h>
int main(){
	float a,b;
	char c;
	printf("enter 2 nos");
	scanf("%f%f",&a,&b);
		printf("enter + for addition\t- for subtraction\t* for multiplication\t// for division");
		fflush(stdin);
	scanf("%c",&c);
	if(c=='+')
	printf("%.2f+%.2f=%.2f",a,b,a+b);
	else if(c=='-')
	printf("%.2f-%.2f=%.2f",a,b,a-b);
	else if(c=='*')
	printf("%.2f*%.2f=%.2f",a,b,a*b);
	else if(c=='/')
	printf("%.2f/%.2f=%.2f",a,b,a/b);
	else
	printf("wrong input given");
	}
