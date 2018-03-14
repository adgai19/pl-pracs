/*wap to swap 2 nos with temp
done on 1-2-2018
*/
#include<stdio.h>
int main(){
	int p,q,t;
	printf("enter 2 nos\n");
	scanf("%d%d",&p,&q);
	printf("the nos before swapping are %d and %d\n",p,q);
	t=p;p=q;q=t;
	printf("the nos after swapping are %d and %d",p,q);
	
}
