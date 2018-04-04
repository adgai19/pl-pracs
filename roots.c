/*program to display roots of a qudratic equation*/
#include<stdio.h>
int main(){
	float a,b,c,d,x1,x2;
	int i= 0;
	printf("enter coefficients of x^2, x and constant");
	scanf("%f%f%f",&a,&b,&c);
//	printf("%d%d%d",a,b,c);
	d=b*b-4*a*c;
	if(d<0)
	{i=1;
	d=(-d);
}
//printf("%f",d);
x1=(-b)/2*a;
	x2=sqrt(d)/(2*a);
		
	if(i){printf("root s are %f+%fi\n and %f-%fi",x1,x2,x1,x2);
		
	}
	else 
	printf("roots are %f and %f",x1+x2,x1-x2);
	
	
}
