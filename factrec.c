/*program to find factorial of a no recursively*/
#include<stdio.h>
int fact(int i){
  if(i==1)
  return 1;
  else return i*fact(i-1);
}
int main(int argc, char const *argv[]) {
int i;
  printf("enter a no\n" );
  scanf("%d",&i );
  printf("the factorial of %d is %d\n",i, fact(i) );
  return 0;
}
