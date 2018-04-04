/*program to find sum of odd and even nos till 100*/
#include<stdio.h>
int main(){
	int e=0,o=0,i;
	for(i=1;i<100;i+=2)
	{e+=i+1;
	o+=i;
	}
	printf("sum of even digits is %d and sum of odd digits id %d",e,o);
}
