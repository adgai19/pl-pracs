/*program to diaplay no of days in the month depending on user input*/
#include<stdio.h>
int main(){
int a;
printf("enter the no of the month");
scanf("%d",&a);
switch(a){
	case 1: case 3:case 5:case 7:case 8:case 10:case 12:printf("no of days are 31");
	break;
	case 4:case 6:case 9:case 11:printf("no of days are 30");
	break;
	case 2:printf("no of days are 28 or 29");
	break;
	default:printf("wrong no entered");
}
}
