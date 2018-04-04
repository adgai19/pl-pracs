/*program  to display a triangle
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main(){
	
	int i,j,k=1,n;
	printf("entar a no");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{	for(k=0;k<n-i;k++)
	printf(" ");
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
}
