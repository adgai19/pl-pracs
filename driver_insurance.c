/* program to check if the driver is to be insured
usage of else if ladder
done on 8-2-2018*/
#include<stdio.h>
int main(){
	char gen,ms;
	int age;
	printf("enter gender if the driver\n m for male and f for female\b");
	fflush(stdin);
	scanf("%c",&gen);
	printf("enter marital status of the driver\n m for married and u for unmarried\b");
	fflush(stdin);
	scanf("%c",&ms);
	printf("enter age\b");
	scanf("%d",&age);
	if(ms=='m')
	printf("insured");
	else if(gen=='m' && age>30)
	printf("insured");
	else if(gen=='f' && age>25)
	printf("insured");
	else
	printf("not insured");
	
}
