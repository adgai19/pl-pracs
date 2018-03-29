/*program to calculate gross salary
done on 8-2-2018*/
#include<stdio.h>
int main(){
	float bs,hra,da,gs;
	printf("enter basic salary");
	scanf("%f",&bs);
	if(bs<1500){
		hra=bs*0.1;
		da=bs*0.9;
	}
	else{
		hra=500;
		da=bs*0.98;
	}
	gs=bs+hra+da;
	printf("the gross salary is %.2f\n hra=%.2f\tda=%.2f",gs,hra,da);
}
