/*program to display following triangle
*
**
***
*/
#include<stdio.h>
int main(){
	
	int i,j,k=1,n;
	printf("entar a no");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
}
