/*program to see if 3 people fit critaria without loops
usage of logical and 
done on 8-2-2018*/
#include<stdio.h>
int main(){
	int ht1,wt1,ht2,wt2,ht3,wt3;
	printf("enter the height and weight of 1st person");
	scanf("%d%d",&ht1,&wt1);
	printf("enter the height and weight of 2nd person");
	scanf("%d%d",&ht2,&wt2);
	printf("enter the height and weight of 3rd person");
	scanf("%d%d",&ht3,&wt3);
	
	if(ht1>=170 && wt1<50)
	printf("person 1 is qualified");
	
	if(ht2>=170 && wt2<50)
	printf("person 2 is qualified");
	
	if(ht3>=170 && wt3<50)
	printf("person 3 is qualified");
}
