/*program to find sum of series 1/1!+1/2!+1/3!... till n*/
#include<stdio.h>
int main(){
	int i,n,j,k;
	float sos=0;
	printf("enter n\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++){k=i;
		for(j=1;k;k--)
	j*=k;
	//printf("%d",k);
	sos+=1.0/j;
	printf("1/%d! ",i);
	if(n!=i)
	printf("+");
	}
	printf("=%f",sos);
}
