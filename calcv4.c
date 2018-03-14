#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
		printf("enter + for addition\t- for subtraction\t* for multiplication\t// for division\t%% for reminder\tl for larger of the two\ts for smaller of the two\t");
		fflush(stdin);
	scanf("%c",&c);
	switch(c){
		case '+':printf("%d+%d=%d",a,b,a+b);
		break;
				case '-':printf("%d-%d=%d",a,b,a-b);
		break;
				case '*':printf("%d*%d=%d",a,b,a*b);
		break;
				case '/':printf("%d//%d=%d",a,b,a/b);
		break;
				case '%':printf("%d%%%d=%d",a,b,a%b);
		break;
		case'l':if(a>b)
		printf("%d is larger than %d",a,b);
		else
		printf("%d is larger than %d",b,a);
		break;
		case 's':if(a<b)
		printf("%d is smaller than %d",a,b);
		else
		printf("%d is smaller than %d",b,a);
		break;
		default:printf("wrong input");
		
	}
	}
