/*program to find whether a letter is vowel or consonent*/
#include<stdio.h>
#include<string.h>
int main(){
	char a;
	printf("enter a alphabet\t");
	scanf("%c",&a);if(isalpha(a))
	if((a>64 && a<91)||(a>=97 && a<123))
	{
		switch(a){
			case 'a':case 'e':case 'i':case 'o':case 'u':case'A':case 'E':case 'I':case 'O':case 'U':
				printf("vowel");
				break;
				default:printf("consonent");
		}
		
	}
	else
	printf("not a alphabet");
}
