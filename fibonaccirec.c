#include <stdio.h>
int fib(int i){
  if(i==0)
  return 0;
  if(i==1)
  return 1;
  return fib(i-1)+fib(i-2);


}
int main(int argc, char const *argv[]) {
int n,i;
  printf("enter a no\n" );
  scanf("%d",&n );
  for(i=1;i<=n;i++)
  printf("%d\t",fib(i) );
  return 0;
}
