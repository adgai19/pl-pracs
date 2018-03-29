#include <stdio.h>
int sum(int i){
  if(i==0)
  return 0;
  return i+sum(i-1);

}
int main(int argc, char const *argv[]) {
int i;
  printf("enter a no\n" );
  scanf("%d",&i );
  printf("the sum of no till %d is %d\n",i,sum(i) );
  return 0;
}
