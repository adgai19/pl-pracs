#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("entar a no");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d*%d+",i,i);
		s+=pow(i,2);
	}
	printf("\b=%d",s);
}
